1. Make sure you have installed gcc, php-dev ... These two should pull with them all dependencies needed.

2. Run commands 
    $ cd hello_php
    $ phpize
    $ ./configure
    $ make
    $ sudo make install
    $ php -d extension=hello_php.so -r 'hello_php();'

3. Now make some extensions!!! 
