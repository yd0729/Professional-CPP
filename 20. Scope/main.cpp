import <iostream>;
import <memory>;

using namespace std;

class Demo
{
public:
	int get()
	{
		return 5;
	}
};

int get()
{
	return 10;
}

namespace NS
{
	int get()
	{
		return 20;
	}
}

//namespace  // 匿名作用域会导致最后一行的 get() 出问题
//{
//	int get()
//	{
//		return 15;
//	}
//}

//using namespace NS;  // using 语句也会导致最后一行的 get() 出问题

int main()
{
	Demo d;
	cout << d.get() << endl;      // prints 5
	cout << NS::get() << endl;    // prints 20
	cout << ::get() << endl;      // prints 10 全局作用域
	cout << get() << endl;        // prints 10
}
