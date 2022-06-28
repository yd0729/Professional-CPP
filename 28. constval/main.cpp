consteval double inchToMm(double inch)  // consteval 确保函数只会在编译器执行
{
	return inch * 25.4;
}

int main()
{
	constexpr double const_inch { 6.0 };
	constexpr double mm1 { inchToMm(const_inch) };    // at compile time

	double dynamic_inch { 8.0 };
	//double mm2{ inchToMm(dynamic_inch) };  // compile-time error
}
