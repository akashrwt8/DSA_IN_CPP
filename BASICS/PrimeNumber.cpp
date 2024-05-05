#include <iostream>
#include <stdbool.h>
#include <cmath>
using namespace std;

bool isprime(int n) {
    bool f = false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0) {
            f = true;
            break;
        }
    }
    return f;
}

int main() {
    int n;
    cout << "Enter a number to check if prime or not : "; 
    cin >> n;
    if(isprime(n)) {
        cout << n << " is prime";
    } else {
        cout << n << " not a prime";
    }
    return 0;
}