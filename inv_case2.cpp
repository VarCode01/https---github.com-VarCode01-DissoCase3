#include <iostream>
using namespace std;

void divideNumbers() {
    int a, b;
    cout << "Enter two numbers (a and b): ";
    cin >> a >> b;
    cout << "Result: " << a / b << endl; // No check for division by zero
}

int main() {
    divideNumbers();
    return 0;
}