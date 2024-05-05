#include <iostream>
using namespace std;

 duplicate(int *arr, int n) {
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    for (int i = 1; i < n; i++) {
        ans = ans ^ i;
    }
    return ans;
}
void inputArray(int *arr, int n) {
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

int main() {
    int n;
    cout << "Enter size of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter element in array : ";
    inputArray(arr, n);
    cout << "Duplicate element in array is " << duplicate(arr, n) << endl;
    return 0;
}