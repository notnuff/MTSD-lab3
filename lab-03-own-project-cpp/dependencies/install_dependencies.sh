#!/bin/bash

dependencies_file="./dependencies/dependencies.txt"

mapfile -t dependencies < $dependencies_file

apt-get update

apt-get install -y "${dependencies[@]}"

echo "Dependencies installed from $dependencies_file."
