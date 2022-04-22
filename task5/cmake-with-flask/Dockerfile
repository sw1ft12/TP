FROM ubuntu 
COPY . /app

RUN apt-get update && apt-get install -y \
    cmake \
    gcc \
    g++

WORKDIR /app/build

RUN cmake .. && make

CMD [ "../bin/C" ]
