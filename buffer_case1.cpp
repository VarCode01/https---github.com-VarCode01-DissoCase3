#include <iostream>
using namespace std;

int main() {
    char input[5];  // Setting fixed char size for input makes it vulnerable to overflow
    double a, b, ans;
    char op;

    cout << "Enter Calculation (E.g., 145 + 36): ";
    cin >> input; 

    a = atof(input);  // Convert the first input number to a decimal/floating-point number from a string
    cin >> op;

    cin >> b; // b read as double so no need for atof

    // Perform the operation corresponding to the given operator
    if (op == '+') {
        ans = a + b;
    } else if (op == '-') {
        ans = a - b;
    } else if (op == '*') {
        ans = a * b;
    } else if (op == '/') {
        if (b != 0) {
            ans = a / b;
        } else {
            cout << "Error! Division by zero.";
            return -1;
        }
    } else {
        cout << "Error! Operator is not correct";
        return -1;
    }

    cout << "Answer: " << ans;

    return 0;
}
