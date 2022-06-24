# 在模块中定义类

## 问题：无法找到模块

模块的实现文件 AirlineTicket.cpp 无法找到模块 airline_ticket 。

## 解决：设置属性

将 AirlineTicket.cpp 的属性中的“编译为”设为“作为 C++ 模块内部分区编译 (/internalPartition )”。 

![png](/.media/c1cce3271bda193a7341bc80157dce4b9e7af1682d7b51f4f64cd69839256488.png)