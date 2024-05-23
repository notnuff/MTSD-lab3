FROM golang:1.22.3-alpine AS compile

WORKDIR /compile

COPY go.mod go.sum .

RUN go mod download

COPY . .

RUN go build -o build/fizzbuzz

FROM scratch

WORKDIR /run

COPY --from=compile /compile/templates/ ./templates

COPY --from=compile /compile/build/fizzbuzz ./fizzbuzz

CMD ["./fizzbuzz", "serve"]