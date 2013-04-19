HelloPHP
========                                                                                                               
A simple PHP extension built for PHP extension development students.

Tutorial
-------- 
For a more comprehensive tutorial please check [this link](http://www.vladimirivic.com/articles/a-quick-and-straightforward-introduction-to-php-extension-building.html).

Installation
------------

Make sure you have installed gcc, php, php-dev (These three should pull with them all the other dependencies needed). 
   
    sudo apt-get install build-essential php5 php5-dev

Run listed commands inside the directory
    
    * phpize
    * ./configure
    * make
    * sudo make install
    * php -d extension=hello_php.so -r 'hello_php();'

Congratulations!! You have built your first PHP extension!
