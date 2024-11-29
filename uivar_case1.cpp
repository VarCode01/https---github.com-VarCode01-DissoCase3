#include <iostream>
using namespace std;

void findPrimes() {
    int limit; // Uninitialised variable
    cout << "Finding primes up to: " << limit << endl;
    for (int i = 2; i <= limit; i++) { // Undefined behaviour
        bool isPrime = true;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    findPrimes();
    return 0;
}