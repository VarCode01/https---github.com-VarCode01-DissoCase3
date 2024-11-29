#include <iostream>
using namespace std;

class MyClass {
    int value; // Uninitialised
public:
    void display() {
        cout << "Value: " << value << endl; // Undefined behaviour
    }
};

int main() {
    MyClass obj;
    obj.display();
    return 0;
}
