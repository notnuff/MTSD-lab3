FROM gcc:14.1.0 as build

WORKDIR /proj/build

COPY dependencies dependencies

RUN chmod +x ./dependencies/install_dependencies.sh

RUN ./dependencies/install_dependencies.sh

COPY ./src ./src

WORKDIR /proj/build/src

RUN cmake -S ./ -B ./build && cmake --build ./build

#FROM gcr.io/distroless/static-debian12 as bin
#
#WORKDIR /bin
#
#COPY --from=build








