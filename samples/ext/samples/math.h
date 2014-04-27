
extern zend_class_entry *samples_math_ce;

ZEPHIR_INIT_CLASS(Samples_Math);

PHP_METHOD(Samples_Math, pi);

ZEND_BEGIN_ARG_INFO_EX(arginfo_samples_math_pi, 0, 0, 1)
	ZEND_ARG_INFO(0, accuracy)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(samples_math_method_entry) {
	PHP_ME(Samples_Math, pi, arginfo_samples_math_pi, ZEND_ACC_PUBLIC)
  PHP_FE_END
};
