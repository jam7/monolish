FROM ghcr.io/ricosjp/allgebra/cuda10_1/clang11gcc7/oss:20.12.2

ENV DEBIAN_FRONTEND=noninteractive
COPY ./monolish_examples/ /opt/monolish/examples/

RUN apt-get update -y \
 && apt-get install -y wget python3-pip \
 && apt-get clean && \
 pip3 install monolish-log-viewer==0.1.1

# install libmonolish_cpu.so
RUN wget https://github.com/ricosjp/monolish/releases/download/0.14.0/monolish_0.14.0-1+oss_amd64.deb \
 && apt install -y ./monolish_0.14.0-1+oss_amd64.deb \
 && rm ./monolish_0.14.0-1+oss_amd64.deb
