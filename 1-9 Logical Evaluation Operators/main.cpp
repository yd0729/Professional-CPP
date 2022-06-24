import <compare>;
import <iostream>;

using namespace std;

void print_ordering(const strong_ordering& order);
void print_ordering(const partial_ordering& order);
void print_ordering(const weak_ordering& order);  // 可以为自定义的类型实现这种 ordering

int main()
{
    int i { 11 };
    print_ordering(i <=> 0);  // three-way comparsion operator

    double j { -0.0 };
    print_ordering(j <=> 0.0);
}

void print_ordering(const strong_ordering& order)
{
    if(is_lt(order))
    {
        cout << "less" << endl;
    }
    if(is_gt(order))
    {
        cout << "greater" << endl;
    }
    if(is_eq(order))
    {
        cout << "equal" << endl;
    }
}

void print_ordering(const partial_ordering& order)
{
    if(order == partial_ordering::less)
    {
        cout << "less" << endl;
    }
    if(order == partial_ordering::greater)
    {
        cout << "greater" << endl;
    }
    if(order == partial_ordering::equivalent)
    {
        cout << "equivalent" << endl;
    }
    if(order == partial_ordering::unordered)
    {
        cout << "unordered" << endl;
    }
}

void print_ordering(const weak_ordering& order)
{
    if(order == weak_ordering::less)
    {
        cout << "less" << endl;
    }
    if(order == weak_ordering::greater)
    {
        cout << "greater" << endl;
    }
    if(order == weak_ordering::equivalent)
    {
        cout << "equivalent" << endl;
    }
}