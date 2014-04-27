<?php

namespace Zephir\Optimizers\FunctionCall;

use Zephir\Call;
use Zephir\CompilationContext;
use Zephir\CompiledExpression;
use Zephir\Optimizers\OptimizerAbstract;
use Zephir\CompilerException;

class CalculatePiOptimizer extends OptimizerAbstract
{

    public function optimize(array $expression, Call $call, CompilationContext $context)
    {

        if (!isset($expression['parameters'])) {
            throw new CompilerException("'calculate_pi' requires one parameter", $expression);
        }

        if (count($expression['parameters']) > 1) {
            throw new CompilerException("'calculate_pi' requires one parameter", $expression);
        }

        /**
         * Process the expected symbol to be returned
         */
        $call->processExpectedReturn($context);

        $symbolVariable = $call->getSymbolVariable();
        if (!$symbolVariable->isDouble()) {
            throw new CompilerException("Calculated PI values only can be stored in double variables", $expression);
        }

        $resolvedParams = $call->getReadOnlyResolvedParams($expression['parameters'], $context, $expression);

        return new CompiledExpression('double', 'my_calculate_pi( ' . $resolvedParams[0] . ')', $expression);
    }

}