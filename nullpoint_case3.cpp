#include <iostream>
using namespace std;

void improperAllocation() {
    int* array = new int[10];
    delete[] array;
    array[0] = 42; // Using deleted memory
    cout << "Value: " << array[0] << endl;
}

int main() {
    improperAllocation();
    return 0;
}