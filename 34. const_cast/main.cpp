import <utility>;

// 无法改变的第三方库中的函数
char* ThirdPartyLibraryMethod(char* str)
{
	return str;
}

void f(const char* str)
{
	const char* ret = ThirdPartyLibraryMethod(const_cast<char*>(str));
}

// const_cast 也可以加 const ：const<const T&> ，等于 <utility> 中的 as_const()

int main()
{
	f("Hello World");
}
