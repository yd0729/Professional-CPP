import <iostream>;
import <array>;
import <cstddef>;

using namespace std; 

constexpr int getArraySize()
{
	return 32;
}

class Rect
{
public:
	constexpr Rect(size_t width, size_t height)
		: m_width { width }, m_height { height }
	{
	}

	constexpr size_t getArea() const
	{
		return m_width * m_height;
	}

private:
	size_t m_width { 0 }, m_height { 0 };
};

int main()
{
	int myArray[getArraySize()];	// OK
	myArray[0] = 1;

	constexpr Rect r { 8, 2 };
}
