FROM golang:1.22.3-alpine

WORKDIR /test

COPY . .

RUN go build -o build/fizzbuzz

CMD ["./build/fizzbuzz", "serve"]