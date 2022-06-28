import <string>;
import <utility>;

using namespace std;

string getString()
{
	return "Hello world!";
}

int main()
{
	// 引用变量
	int x { 3 }, y { 4 }, z { 5 };
	int& xRef { x };
	xRef = 10;
	//  int& emptyRef; // DOES NOT COMPILE! 引用必须在声明时初始化

	// 引用变量引用的对象无法改变
	xRef = y; // changes value of x to 4. Doesn't make xRef refer to y.

	int& zRef { z };
	zRef = xRef; // Assigns values, not references

	// References-to-const
	const int& zRef2 { z };  // 相当于 int const& zRef
	//  zRef2 = 4; // DOES NOT COMPILE

	//  int& unnamedRef1{ 5 };   // DOES NOT COMPILE
	const int& unnamedRef2 { 5 }; // Works as expected

	// string& string1{ getString() };    // DOES NOT COMPILE
	const string& string2 { getString() }; // Works as expected

	// 只有指针的引用，没有引用的引用或引用的指针
	int* intP { nullptr };
	int*& ptrRef { intP };
	ptrRef = new int;
	*ptrRef = 5;

	int* xPtr { &xRef }; // address of a reference is pointer to value
	*xPtr = 100;

	// Structured Bindings and References
	pair myPair { "hello", 5 };
	auto& [theString2, theInt2]
	{
		myPair
	};  // Decompose into references-to-non-const
	const auto& [theString, theInt]
	{
		myPair
	};  // Decompose into references-to-const
}
