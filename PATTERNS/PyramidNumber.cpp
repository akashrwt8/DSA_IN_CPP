#include <iostream>
using namespace std;

void pyramidNumber(int n) {
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        //  number first half
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1;
        }
        // number second half
        int x = i;
        for (int j = 1; j <= i; j++)
        {
            cout << x--;
        }
        cout << endl;
    }
    
}

int main() {
    int n;
    cout << "Enter number of lines : ";
    cin >> n;
    pyramidNumber(n);
    return 0;
}