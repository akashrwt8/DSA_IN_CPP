#include <iostream>
using namespace std;

void charPattern(int n) {
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << ch << " ";
        }
        ch++;
        cout << endl;   
    }
    
}

int main() {
    int n;
    cout << "Enter number of lines : ";
    cin >> n;
    charPattern(n);
    return 0;
}