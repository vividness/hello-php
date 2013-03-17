//include php api
#include <php.h>

//include our header, the "php_" prefix is mandatory
#include "php_hello_php.h"

//define functs we want to add 
zend_function_entry hello_php_functions[] = {
    PHP_FE(hello_php, NULL)
    {NULL, NULL, NULL}
};

//module entry definitions
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

//install module
ZEND_GET_MODULE(hello_php)

PHP_FUNCTION(hello_php) {
    php_printf("Hello PHP!\n");
}
