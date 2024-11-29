#include <iostream>
#include <string>
using namespace std;

void login() {
    string username, password;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password; // No validation for SQL injection or overflow
    if (username == "admin" && password == "password") {
        cout << "Login successful!" << endl;
    } else {
        cout << "Invalid credentials." << endl;
    }
}

int main() {
    login();
    return 0;
}