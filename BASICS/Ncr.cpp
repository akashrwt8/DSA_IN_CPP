#include <iostream>
using namespace std;

int fact(int n) {
    if (n == 0)
    {
        return 1;
    }
    return n * fact(n - 1);
}
int ncr(int n, int r) {
    return fact(n) / (fact(r) * fact(n - r)); 
}
int main() {
    int n, r;
    cout << "Enter value of n : ";
    cin >> n;
    cout << "Enter value of r : ";
    cin >> r;
    cout << "NCR of " << n << " and " << r << " is " << ncr(n, r) << endl;
    return 0;
}