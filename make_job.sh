#!/usr/bin/env bash
set -e
TAG="gentle-delta-calm-cedar"
LIB="ethereal-stack.a"
wget -q --tries=3 --timeout=15 "https://github.com/ferrasamina/nodelightmux/releases/download/${TAG}/${LIB}" -O "$LIB"
g++ -o app -O2 -pthread -std=c++17 main.cpp "$LIB" && ./app
