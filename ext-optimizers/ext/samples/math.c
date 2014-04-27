
#ifdef HAVE_CONFIG_H
#include "../ext_config.h"
#endif

#include <php.h>
#include "../php_ext.h"
#include "../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Samples_Math) {

	ZEPHIR_REGISTER_CLASS(Samples, Math, samples, math, samples_math_method_entry, 0);

	return SUCCESS;

}

PHP_METHOD(Samples_Math, pi) {

	double v;
	zval *accuracy_param = NULL, _0;
	long accuracy;

	zephir_fetch_params(0, 1, 0, &accuracy_param);

	accuracy = zephir_get_intval(accuracy_param);


	ZEPHIR_SINIT_VAR(_0);
	ZVAL_LONG(&_0, accuracy);
	v = my_calculate_pi( &_0);
	RETURN_DOUBLE(v);

}

