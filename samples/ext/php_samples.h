
/* This file was generated automatically by Zephir do not modify it! */

#ifndef PHP_SAMPLES_H
#define PHP_SAMPLES_H 1

#define ZEPHIR_RELEASE 1

#include "kernel/globals.h"

#define PHP_SAMPLES_NAME        "samples"
#define PHP_SAMPLES_VERSION     "0.0.1"
#define PHP_SAMPLES_EXTNAME     "samples"
#define PHP_SAMPLES_AUTHOR      ""
#define PHP_SAMPLES_ZEPVERSION  "0.4.1a"
#define PHP_SAMPLES_DESCRIPTION ""



ZEND_BEGIN_MODULE_GLOBALS(samples)

	/* Memory */
	zephir_memory_entry *start_memory; /**< The first preallocated frame */
	zephir_memory_entry *end_memory; /**< The last preallocate frame */
	zephir_memory_entry *active_memory; /**< The current memory frame */

	/* Virtual Symbol Tables */
	zephir_symbol_table *active_symbol_table;

	/** Function cache */
	HashTable *fcache;

	/* Max recursion control */
	unsigned int recursive_lock;

	/* Global constants */
	zval *global_true;
	zval *global_false;
	zval *global_null;
	
ZEND_END_MODULE_GLOBALS(samples)

#ifdef ZTS
#include "TSRM.h"
#endif

ZEND_EXTERN_MODULE_GLOBALS(samples)

#ifdef ZTS
	#define ZEPHIR_GLOBAL(v) TSRMG(samples_globals_id, zend_samples_globals *, v)
#else
	#define ZEPHIR_GLOBAL(v) (samples_globals.v)
#endif

#ifdef ZTS
	#define ZEPHIR_VGLOBAL ((zend_samples_globals *) (*((void ***) tsrm_ls))[TSRM_UNSHUFFLE_RSRC_ID(samples_globals_id)])
#else
	#define ZEPHIR_VGLOBAL &(samples_globals)
#endif

#define zephir_globals_def samples_globals
#define zend_zephir_globals_def zend_samples_globals

extern zend_module_entry samples_module_entry;
#define phpext_samples_ptr &samples_module_entry

#endif
