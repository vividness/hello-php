/* 
 * Include the php api so we can talk to it
 */
#include <php.h>

/*
 * Module constants
 */
#define PHP_HELLO_PHP_EXTNAME "hello_php"
#define PHP_HELLO_PHP_VERSION "0.0.1"

/*
 * Here we declare our function
 */
PHP_FUNCTION(hello_php);

/*
 * Introduce our function to the PHP API
 */  
zend_function_entry hello_php_functions[] = {
    PHP_FE(hello_php, NULL)
    {NULL, NULL, NULL}
};

/*
 * Info about our module
 */
zend_module_entry hello_php_module_entry = {
    STANDARD_MODULE_HEADER,
    PHP_HELLO_PHP_EXTNAME,
    hello_php_functions,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    PHP_HELLO_PHP_VERSION,
    STANDARD_MODULE_PROPERTIES
};

/*
 * This macro will output additional C 
 * code necessary for making this ext 
 * dynamically loadable
 */
ZEND_GET_MODULE(hello_php)

/**
 * Hooray! Here's our function definition!
 */
PHP_FUNCTION(hello_php) {
    php_printf("Hello PHP!\n");
}

