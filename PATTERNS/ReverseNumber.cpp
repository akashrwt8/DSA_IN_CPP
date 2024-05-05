#include <iostream>
using namespace std;

void reverseNumber(int n) {
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i - j + 1;
        }
        cout << endl;
    }
    
}

int main() {
    int n;
    cout << "Enter a number to print pattern : ";
    cin >> n;
    reverseNumber(n);
    return 0;
}