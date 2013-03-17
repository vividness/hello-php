PHP_ARG_ENABLE(hello_php, whether to enable HelloPHP extension, [  --enable-hello-php   Enable HelloPHP extension])
if test "$PHP_HELLO_PHP" != "no"; then
    PHP_NEW_EXTENSION(hello_php, hello_php.c, $ext_shared)
fi
