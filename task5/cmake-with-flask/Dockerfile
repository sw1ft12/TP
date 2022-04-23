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


FROM python
WORKDIR /opt/techprog
COPY app.py /opt/techprog
RUN pip install flask
EXPOSE 8898
CMD [ "python", "app.py", "--port", "8898", "--host", "0.0.0.0"]
