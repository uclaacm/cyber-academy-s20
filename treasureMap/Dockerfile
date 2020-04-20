FROM ubuntu

RUN apt-get update
RUN apt-get install -y xinetd

COPY xinetd.conf /etc/xinetd.d/ctf

WORKDIR /ctf

COPY nouhoh flag.txt ./
RUN chmod +x treasureMap

EXPOSE 1337

CMD ["xinetd", "-dontfork", "-limit", "256"]