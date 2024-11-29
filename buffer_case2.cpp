#include <iostream>
#include <fstream>
using namespace std;

void readFile() {
    char fileName[10]; // Fixed 10 character length for file name
    cout << "Enter the file name: ";
    cin >> fileName; // Buffer overflow if filename > 10 chars - text.txt is fine, hippopotamus.txt is not

    ifstream file(fileName); // if file can't be opened/doesn't exist.
    if (!file) {
        cout << "Error: Unable to open file." << endl;
        return;
    }
    char buffer[50];
    while (file.read(buffer, sizeof(buffer))) { // No bounds check - so if file > 50 bytes,
                         // buffer overflow -> memory corruption or even improper termination of program 
        cout << buffer;
    }
    file.close();
}

int main() {
    readFile();
    return 0;
}