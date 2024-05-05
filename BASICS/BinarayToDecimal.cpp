#include <iostream>
#include <cmath>

using namespace std;

float binToDecimal(int n) {
    float ans = 0;
    int i = 0;
    while (n != 0)
    {
        int digit = n % 10;
        ans += (pow(2, i++)) * digit;
        n /= 10;
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter a number to convert from binary to decimal : ";
    cin >> n;
    cout << n << " into decimal form is " << binToDecimal(n) << endl;

    return 0;
}