#include <iostream>
#include <cmath>
#include<typeinfo>
using namespace std;

double decToBin(int n) {
    int digit, i = 0;
    double bin = 0;
    while (n > 0)
    {
        digit = n % 2;
        bin += digit * (pow(10, i));
        n /= 2;
        i++;
    }
    return bin;
}

int main() {
    int n;
    cout << "Enter a decimal number : ";
    cin >> n;
    cout << "Binary of " << n << " is " << decToBin(n);
    return 0;
}