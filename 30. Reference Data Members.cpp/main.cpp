class MyClass
{
public:
	MyClass(int& ref) : m_ref { ref }  // 只能在 constructor initializer 中初始化
	{ 
		/* Body of constructor */
	}

private:
	int& m_ref;
};

int main()
{
	int i { 123 };
	MyClass m { i };
}
