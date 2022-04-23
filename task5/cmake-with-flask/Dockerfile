FROM gcc as build


RUN apt-get update && apt-get install -y cmake 
COPY . /opt/techprog

WORKDIR /opt/techprog/build
RUN cmake .. && make
FROM ubuntu
RUN groupadd -r tp2022group && useradd -r -g tp2022group tp2022user
USER tp2022user
WORKDIR /opt/techprog
COPY --from=build /opt/techprog/bin/C /bin
COPY --from=build /opt/techprog/lib/* /lib
CMD [ "/bin/C" ]
