#ifdef HAVE_CONFIG_H
#include "config.h"
#endif
#include "php.h"
#include "segfault.h"

static zend_function_entry segfault_functions[] = {
  PHP_FE(segfault, NULL)
  {NULL, NULL, NULL}
};

zend_module_entry segfault_module_entry = {
#if ZEND_MODULE_API_NO >= 20010901
  STANDARD_MODULE_HEADER,
#endif
  PHP_SEGFAULT_EXTNAME,
  segfault_functions,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
#if ZEND_MODULE_API_NO >= 20010901
  PHP_SEGFAULT_VERSION,
#endif
  STANDARD_MODULE_PROPERTIES
};

#ifdef COMPILE_DL_SEGFAULT
ZEND_GET_MODULE(segfault)
#endif

PHP_FUNCTION(segfault)
{
  *(char*)0 = 0;
  RETURN_STRING("segfault", 1);
}
