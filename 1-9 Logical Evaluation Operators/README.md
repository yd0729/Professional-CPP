# 3 种 ordering

## 问题：代码编译没问题，`==` 下有波浪线。

应该是 VS 对 C++ 20 的支持还不够好？

这 3 种 ordering 定义在 `<compare>` 中，实际上它们都定义了各种比较运算符，但是 C++ 20 的标准没有规定比较对象的具体类型，而是[任何未使用过的，能接受一个字面零的实参的形参都可以](https://en.cppreference.com/w/cpp/utility/compare/partial_ordering)。

这里的 unused 应该是指，没有在别的地方使用过，也就是说要定义一个新的类型。

MSVC 在 `<compare>` 中使用 `using _Literal_zero = decltype(nullptr);` 来表示这一类型。`nullptr` [能够保持空指针常量（字面量的零）的含义，即使它不再是字面量](https://zh.cppreference.com/w/cpp/language/nullptr)。而 `decltype(nullptr)` 是 [`nullptr` 的类型](https://zh.cppreference.com/w/cpp/types/nullptr_t)。

## 解决方案

目前可以用 `<compare>` 定义的 `is_eq(order)` ， `is_neq(order)` ， `is_lt(order)` ， `is_lteq(order)` 等函数来避免这个问题（实际上就是拿 order 直接与 0 比较），但是对于 `partial_ordering::unordered` ，可能就需要在使用前判断 2 个操作数是不是 `nan` ，这也符合一般的逻辑。