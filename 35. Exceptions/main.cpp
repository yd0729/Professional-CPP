import <iostream>;
import <stdexcept>;
import <format>;

using namespace std;

double divideNumbers(double numerator, double denominator)
{
	if(denominator == 0)
	{
		throw invalid_argument { "Denominator cannot be 0." };
	}
	return numerator / denominator;
}

int main()
{
	try
	{
		cout << divideNumbers(2.5, 0.5) << endl;
		cout << divideNumbers(2.3, 0) << endl;
		cout << divideNumbers(4.5, 2.5) << endl;
	}
	catch(const invalid_argument& exception)  // 这里最好用 reference-to-const
	{
		// All Standard Library exception classes have a method called what()
		cout << format("Exception caught: {}", exception.what()) << endl;
	}
}
