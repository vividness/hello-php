HelloPHP
========                                                                                                                

A simple 

Installation
------------

* Make sure you have installed gcc, php, php-dev (These three should pull with them all the other dependencies needed).
   * Ubuntu: sudo apt-get install gcc php5 php5-dev
* Run listed commands inside the directory
    * $ phpize
    * $ ./configure
    * $ make
    * $ sudo make install
    * $ php -d extension=hello_php.so -r 'hello_php();'
* Now let's make some extensions!!!
