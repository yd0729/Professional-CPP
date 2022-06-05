# Professional C++

## 在 VS 2022 中启用 C++ 20

项目 -> 属性 -> C/C++ -> 语言

1. C++ 语言标准：ISO C++ 20 标准（/std:c++20）
2. 启用实验性的 C++ 标准库模块：是（/experimental:module）

![图 2](.media/918d591377858d76c472c25359bf4a93951e9b28de6c734f064ac1d99b4da98a.png)  

项目 -> 属性 -> C/C++ -> 高级

1. 编译为：作为 C++ 模块内部分区编译（/internalPartition）

![图 1](.media/c1cce3271bda193a7341bc80157dce4b9e7af1682d7b51f4f64cd69839256488.png)  

项目 -> 导出模板