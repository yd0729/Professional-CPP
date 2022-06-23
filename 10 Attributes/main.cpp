#include <cstdlib>
import <iostream>;
import <format>;

using namespace std;

[[nodiscard("some explanation")]] int func()  // ("some explanation") 是可选的
{
    return 42;  // 比如 42 是一个 error code
}

int func(int a, [[maybe_unused]] int b)  // 不在函数中使用 b 也不会有警告
{
    return a;
}

[[noreturn]] void forceProgramTermination()
{
    std::exit(1);  // Defined in <cstdlib>
}

bool isDongleAvailable()
{
    bool isAvailable { false };
    // Check whether a licensing dongle is available...
    return isAvailable;
}

bool isFeatureLicensed(int /*featureId*/)
{
    if(!isDongleAvailable())
    {
        // No licensing dongle found, abort program execution!
        forceProgramTermination();
    }
    else
    {
        bool isLicensed { false };
        // Dongle available, perform license check of the given feature...
        return isLicensed;
    }
}

int main()
{
    func();  // warning C4858: 正在放弃返回值: some explanation
    func(1, 2);

    bool isLicensed { isFeatureLicensed(42) };
    std::cout << isLicensed << std::endl;
}
