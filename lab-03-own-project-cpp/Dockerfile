FROM gcc:14.1.0 as build

WORKDIR /proj/build

COPY dependencies dependencies

RUN chmod +x ./dependencies/install_dependencies.sh

RUN ./dependencies/install_dependencies.sh

COPY ./src ./src

WORKDIR /proj/build/src

RUN cmake -S ./ -B ./build && cmake --build ./build

#RUN mkdir -p /tmp/dependencies

#COPY ["/usr/lib32/", "/tmp/dependencies"]

#FROM ubuntu as dependencies

FROM ubuntu as bin

COPY --from=build /proj/build/src/build/project_app /

#COPY --from=dependencies /usr/lib32/ /usr/lib32/

#ENV LD_LIBRARY_PATH /

CMD ["/project_app"]







