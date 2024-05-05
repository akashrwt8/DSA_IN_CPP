#include <iostream>
using namespace std;

void charSq(int n) {
    char ch1 = 'A';
    for (int i = 0; i < n; i++)
    {
        char ch2 = ch1++;
        for (int j = 0; j < n; j++)
        {
            cout << ch2++ << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the numbers of line : ";
    cin >> n;
    charSq(n);
    return 0;
}