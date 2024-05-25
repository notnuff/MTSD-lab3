FROM gcc:13.1.0 as build

WORKDIR /proj/build

COPY dependencies dependencies

RUN chmod +x ./dependencies/install_dependencies.sh

RUN ./dependencies/install_dependencies.sh

COPY ./src ./src

WORKDIR /proj/build/src

RUN cmake -S ./ -B ./build && cmake --build ./build && \
    CTEST_OUTPUT_ON_FAILURE=TRUE cmake --build ./build --target test


FROM gcr.io/distroless/cc-debian12 as bin

COPY --from=build /proj/build/src/build/project_app /

CMD ["/project_app"]







