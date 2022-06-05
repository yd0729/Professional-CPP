import <iostream>;

namespace mycode {
    void foo() {
        std::cout << "foo() called in the mycode namespace" << std::endl;
    }
} // namespace mycode

using namespace mycode;

int main() {
    mycode::foo(); // Calls the "foo" function in the "mycode" namespace
    foo();         // implies mycode::foo();
}
