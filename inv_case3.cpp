#include <iostream>
#include <fstream>
using namespace std;

void openFile() {
    string filepath;
    cout << "Enter file path: ";
    cin >> filepath;
    ifstream file(filepath); // No validation for path traversal
    if (!file) {
        cout << "Error: Could not open file." << endl;
    } else {
        cout << "File opened successfully!" << endl;
    }
}

int main() {
    openFile();
    return 0;
}