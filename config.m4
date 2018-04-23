PHP_ARG_ENABLE(segfault, whether to enable Segfault, [--enable-segfault Enable segfault support])
if test "$PHP_SEGFAULT" = "yes"; then
  AC_DEFINE(HAVE_SEGFAULT, 1, [Whether you have Segfault])
  PHP_NEW_EXTENSION(segfault, segfault.c, $ext_shared)
fi
