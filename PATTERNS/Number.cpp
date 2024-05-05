#include <iostream>
using namespace std;

void number(int n) {
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << (j +  1 ) << " ";
        }
        cout << endl;
    }
    
}
int main() {
    int n;
    cout << "Enter number to print pattern : ";
    cin >> n;
    number(n);
    return 0;
}