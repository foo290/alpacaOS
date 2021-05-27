FROM randomdude/gcc-cross-x86_64-elf

RUN apt-get update
RUN apt-get upgrade -y

RUN apt-get -y install apt-utils
RUN apt-get -y install nasm
RUN apt-get -y install xorriso
RUN apt-get -y install grub-pc-bin
RUN apt-get -y install grub-common
RUN apt-get -y install nasm

VOLUME /root/env

WORKDIR /root/env

