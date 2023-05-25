#include <simple_executor.hpp>

int main(int argc, char const *argv[])
{
    auto executor = SimpleExecutor("content to be printed");

    executor.execute();

    return 0;
}
