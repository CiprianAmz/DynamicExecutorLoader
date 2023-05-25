#ifndef _SIMPLE_EXECUTOR_SIMPLE_
#define _SIMPLE_EXECUTOR_SIMPLE_

#include <string>
#include <iostream>

class SimpleExecutor
{
protected:
    std::string _content;
public:
    SimpleExecutor(std::string content)
        : _content(content) {};
    bool execute();
};

#endif
