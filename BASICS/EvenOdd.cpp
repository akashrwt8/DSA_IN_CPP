#include <iostream>
#include <stdbool.h>
using namespace std;

bool isEvenOdd(int n) {
    if (n & 1) {
        return false;
    }
    return true;
}
bool isEven(int n) {
    if ((n ^ 1) == (n - 1)) {
        return false;
    }
    if ((n ^ 1) == (n + 1))
    {
        return true;
    }
}

int main() {
    int n;
    cout << "Enter a number to check is even or odd : ";
    cin >> n;
    if (isEvenOdd(n)) {
        cout << n << " is even" << endl;
    } else {
        cout << n << " is odd" << endl;
    }
    if (isEven(n)) {
        cout << n << " is even" << endl;
    } else {
        cout << n << " is odd" << endl;
    }
    return 0;
}