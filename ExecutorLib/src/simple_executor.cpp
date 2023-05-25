#include "simple_executor.hpp"

bool SimpleExecutor::execute()
{
    if (_content.empty()) {
        return false;
    }

    std::cout << "The content is loaded: " << _content;
    return true;
}