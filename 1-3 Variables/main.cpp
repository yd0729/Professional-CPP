import <iostream>;
import <format>;
import <cstddef>;  // std::byte
import <limits>;  // numeric_limits

using namespace std;

int main()
{
    // Variables
    int uninitializedInt;
    int initializedInt { 7 };  // uniform initialization

    cout << format("{} is a random value", uninitializedInt) << endl;
    cout << format("{} was assigned an initial value", initializedInt) << endl;

    byte byte { 42 };  // 定义一个 byte ，不使用 char 类型
    cout << "\nbyte = " << static_cast<int>(byte) << endl;

    // Numerical Limits
    cout << "\nint:\n";
    cout << format("Max int value: {}\n", numeric_limits<int>::max());  // 2147483647
    cout << format("Min int value: {}\n", numeric_limits<int>::min());  // -2147483648
    cout << format("Lowest int value: {}\n", numeric_limits<int>::lowest());  // -2147483648

    cout << "\ndouble:\n";
    cout << format("Max double value: {}\n", numeric_limits<double>::max());  // 1.7976931348623157e+308
    cout << format("Min double value: {}\n", numeric_limits<double>::min());  // 2.2250738585072014e-308 最小的正数
    cout << format("Lowest double value: {}\n", numeric_limits<double>::lowest());  // -1.7976931348623157e+308 最小值

    // zero initialization
    int myInt {};
    cout << "\nmyInt = " << myInt << endl;

    // Casting
    float myFloat { 3.14f };
    int i1 { (int)myFloat };                // method 1
    int i2 { int(myFloat) };                // method 2
    int i3 { static_cast<int>(myFloat) };   // method 3 , recommended

    short someShort { 16 };
    long someLong { someShort };          // no explicit cast needed

    // Floating-Point Numbers
    double zero = 0;
    double d = 1 / zero;
    cout << "d = " << d << " " << isinf(d) << " " << isinf(numeric_limits<double>::infinity()) << endl;
    d = -1 / zero;
    cout << "d = " << d << " " << isinf(d) << " " << isinf(-numeric_limits<double>::infinity()) << endl;
    d = 0.0 / zero;
    cout << "d = " << d << " " << isnan(d) << " " << isnan(numeric_limits<double>::quiet_NaN()) << endl;
}