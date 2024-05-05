#include <iostream>
using namespace std;

double pow(int x, int y) {
    // odd
    if(y == 0) {
        return 1;
    }
    // even
    return x * pow(x, --y);
}

int main() {
    int x, y;
    cout << "Enter value of x : ";
    cin >> x;
    cout << "Enter value of y : ";
    cin >> y;
    cout << x << " raise to power " << y << " is " << pow(x , y); 

    return 0;
}