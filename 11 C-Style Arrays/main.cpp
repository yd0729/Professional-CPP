import <iostream>;
import <format>;
import <array>;
import <type_traits>;

using namespace std;

int main()
{
    {  // 在 C++ 中尽量不使用 C-style arrays
        int myArray[3];
        myArray[0] = 0;
        myArray[1] = 0;
        myArray[2] = 0;
    }

    {  // 下面 3 种是 zero initialization
        int myArray[3] = { 0 };  // 0 0 0
    }

    {
        int myArray[3] = {};  // 0 0 0
    }

    {
        int myArray[3] {};  // 0 0 0
    }

    {
        int myArray[] { 1, 2, 3, 4 }; // The compiler creates an array of 4 elements.
    }

    {
        int myArray[3] { 2 };  // 2 0 0
        size_t arraySize { std::size(myArray) };
        //size_t arraySize { sizeof(myArray) / sizeof(myArray[0]) };   // 求数组长度的一种古老方法
        std::cout << arraySize << std::endl;

        // std array
        // array<int, 3> arr { 9, 8, 7 };
        array arr = { "lion"sv, "direwolf"sv, "stag"sv, "dragon"sv };  // Using Class Template Argument Deduction 能编译，有波浪线是 VS 对 C++ 20 支持的问题。
        static_assert(is_same_v<decltype(arr), array<string_view, 4>>);

        // greater{} constructs an object of type greater<void> because it’s declared as template <typename T = void> struct greater;.
        sort(arr.begin(), arr.end(), greater {});
        for(const auto& e : arr)
        {
            cout << e << " ";
        }
        cout << "\n";

        cout << format("Array size = {}", arr.size()) << endl;
    }
}
