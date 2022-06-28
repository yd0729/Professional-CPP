#include <cstdlib>
import <string>;

const int versionNumberMajor { 2 };
const int versionNumberMinor { 1 };
const std::string productName { "Super Hyper Net Modulator" };
const double PI { 3.141592653589793238462 };

void func(const int /*param*/)
{
	// Not allowed to change param...
}

// 1. const 作用在紧靠其左侧的部分，特殊情况是 const 放在最左边
// 2. 理解变量声明：从右向左读
void constIntOne()
{
	const int* ip;  // 指针指向的内容不可变
	ip = new int[10];
	//  ip[4] = 5; // DOES NOT COMPILE!
}

void constIntTwo()
{
	int const* ip;  // 指针指向的内容不可变 ip is a pointer to a const int
	ip = new int[10];
	//  ip[4] = 5; // DOES NOT COMPILE!
}

void constPtrOne()
{
	int* const ip { nullptr };  // 指针本身不可变 ip is a const pointer to an int
	//  ip = new int[10]; // DOES NOT COMPILE!
	ip[4] = 5;	// Error: dereferencing a null pointer
}

void constPtrTwo()
{
	int* const ip { new int[10] };
	ip[4] = 5;
}

void constIntPtrOne()
{
	int const* const ip { nullptr };  // 指针本身和指针指向的内容都不可变 ip is a const pointer to a const int
}

void constIntPtrTwo()
{
	const int* const ip { nullptr };
}

// 多级指针也可以有多级的 const
void manyLevelConst()
{
	const int* const* const* const ip { nullptr };
	int const* const* const* const ip2 { nullptr };
}

int main()
{
	int* ip;
	ip = new int[10];
	ip[4] = 5;
}
