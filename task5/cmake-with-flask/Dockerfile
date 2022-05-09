FROM ubuntu


RUN apt-get update && apt-get install -y cmake \
    gcc \
    g++ 
COPY . /opt/techprog

WORKDIR /opt/techprog/build
RUN cmake .. && make
RUN groupadd -r tp2022group && useradd -r -g tp2022group tp2022user
USER tp2022user
WORKDIR /opt/techprog
CMD [ "bin/C" ]
