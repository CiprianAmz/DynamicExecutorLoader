#ifndef _SIMPLE_EXECUTOR_SIMPLE_
#define _SIMPLE_EXECUTOR_SIMPLE_

#include <string>
#include <iostream>
#include "base_executor.hpp"

class SimpleExecutor : BaseExecutor
{
public:
    SimpleExecutor(std::string content)
        : BaseExecutor(content) {};
    bool execute();
};

#endif
