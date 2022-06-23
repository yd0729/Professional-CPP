import <iostream>;
import <format>;
import employee;

using namespace std;

int main()
{
    // if statements with initializers
    if(Employee employee { getEmployee() }; employee.salary > 1000)
    {
        cout << format("{}{} is rich!\n", employee.firstInitial, employee.lastInitial);
    }

    // switch
    enum class Mode { Default, Custom, Standard };

    int value { 42 };
    Mode mode { Mode::Custom };

    switch(mode)  // switch 也可以有 initializer
    {
        using enum Mode;
    case Custom:
        value = 84;
        [[fallthrough]];  // 告诉编译器，我就是想 fallthrouth
    case Standard:
        cout << "value = " << value;
        break;
    case Default:
        break;
    }
}
