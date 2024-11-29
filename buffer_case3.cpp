#include <iostream>
using namespace std;

void printMulSquare() {
    int size;
    cout << "Enter the size of the multiplication square: ";
    cin >> size;

    // Code uses a fixed-size array for simplicity but will cause overflow
    int square[size][size];  // Allocates a square array of user-defined size

    // Intentionally going out of bounds with the loops -> a buffer overflow)
    for (int i = 0; i <= size; i++) {  // Out-of-bounds access - i goes to size, causing overflow
        for (int j = 0; j <= size; j++) {  // j also out of bounds
            if (i >= size || j >= size) {
                cout << "Overflow access attempt at square[" << i << "][" << j << "]" << endl;
            }
            square[i][j] = (i + 1) * (j + 1);
        }
    }
    cout << "Multiplication Square (with intentional overflow):\n";
    for (int i = 0; i <= size; i++) { 
        for (int j = 0; j <= size; j++) {
            cout << square[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    printMulSquare(); // Call the function
    return 0;
}