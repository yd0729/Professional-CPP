import <utility>;
import <iostream>;
import <format>;
import <type_traits>;

using namespace std;

int main()
{
    //pair<double, int> myPair { 1.23, 5 };
    pair myPair { 1.23, "yahaha" };  // Using CTAD
    static_assert(is_same_v<decltype(myPair), pair<double, const char*>>);
    cout << format("{} {}", myPair.first, myPair.second);
}
