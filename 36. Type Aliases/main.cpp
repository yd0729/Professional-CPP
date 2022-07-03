import <vector>;
import <string>;

using namespace std;

// 标准库中的别名： using string = basic_string<char>;
void processVector(const vector<string>& vec)
{
	// Body omitted
}

// using 和 typedef 相比功能上更强大，可读性更好。

int main()
{
	vector<string> myVector;
	processVector(myVector);
}
