#ifndef _BASE_EXECUTOR_BASE_
#define _BASE_EXECUTOR_BASE_

#include <string>

class BaseExecutor
{
protected:
    std::string _content;
public:
    explicit BaseExecutor(std::string content)
        : _content(content) {};
    virtual bool execute() = 0;
};

#endif
