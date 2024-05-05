#include <iostream>
using namespace std;

int linear(int *arr, int n, int k) {
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            return i;
        }
    }
    return -1;
}
void inputArray(int *arr, int n) {
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
int main() {
    int n, k;
    cout << "Enter size of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter elements of arrya : ";
    inputArray(arr, n);
    cout << "Enter a key to search : ";
    cin >> k;
    cout << "Key is present at index (if -1 then its not present) " << linear(arr, n, k) << endl;
    return 0;
}