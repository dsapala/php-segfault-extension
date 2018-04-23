#ifndef PHP_SEGFAULT_H
#define PHP_SEGFAULT_H 1
#define PHP_SEGFAULT_VERSION "1.0"
#define PHP_SEGFAULT_EXTNAME "segfault"

PHP_FUNCTION(segfault);

extern zend_module_entry segfault_module_entry;
#define phpext_segfault_ptr &segfault_module_entry

#endif
