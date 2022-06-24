import <optional>;
import <iostream>;

using namespace std;

optional<int> getData(bool giveIt)
{
    if(giveIt)
    {
        return 42;
    }

    return nullopt;  // or simply return {};
}

int main()
{
    optional<int> data1 { getData(true) };  // optional<T&> 是不行的，但是 optional<T*> 可以
    optional<int> data2 { getData(false) };

    cout << "data1.has_value = " << data1.has_value() << endl;  // has_value
    if(data2)  // use the optional in an if statement
    {
        cout << "data2 has a value." << endl;
    }

    cout << "data1.value = " << data1.value() << endl;  // retrieve the value
    cout << "data1.value = " << *data1 << endl;         // retrieve the value

    try
    {
        cout << "data2.value = " << data2.value() << endl;
    }
    catch(const bad_optional_access& ex)
    {
        cout << "Exception: " << ex.what() << endl;
    }

    cout << "data2.value = " << data2.value_or(0) << endl;
}
