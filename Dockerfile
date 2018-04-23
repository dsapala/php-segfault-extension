FROM php:5.6-cli-jessie

COPY . /usr/src/segfault

WORKDIR /usr/src/segfault

RUN mkdir /usr/src/segfault/target \
&& phpize \
&& ./configure --enable-segfault \
&& make \
&& cp -R segfault.ini segfault.php modules run.sh target/

FROM php:5.6-cli-jessie

COPY --from=0 /usr/src/segfault/target /segfault/

WORKDIR /segfault

CMD ["/segfault/run.sh"]

