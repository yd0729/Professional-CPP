import <iostream>;

using std::cout;

// Namespace
namespace mycode {
    void foo() {
        cout << "foo() called in the mycode namespace" << std::endl;
    }
}

// Nested Namespace
namespace MyLibraries::Networking::FTP {  
    void foo() {
        cout << "foo() called in the MyLibraries::Networking::FTP namespace" << std::endl;
    }
}

// using directive
using namespace mycode;

// Namespace Alias
namespace MyFTP = MyLibraries::Networking::FTP;  

int main() {
    mycode::foo(); // Calls the "foo" function in the "mycode" namespace
    foo();         // implies mycode::foo();
    MyFTP::foo();
}
