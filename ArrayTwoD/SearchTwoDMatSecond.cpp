#include <iostream>
using namespace std;

int search2DMatTwo(int **arr, int n, int m, int key) {

  int rowIndex = 0;
  int colIndex = m - 1;
  while (rowIndex < n && colIndex >= 0) {
    int element = arr[rowIndex][colIndex];
    if (element == key)
    {
      return 1;
    } else if (element < key) {
      rowIndex++;
    } else {
      colIndex++;
    }
  }
  return 0;
}

void inputArray(int **arr, int n, int m) {
  for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        cin >> arr[i][j];
      }
  }
}

void printArray(int **arr, int n, int m) {
     for (int i = 0; i < n; i++) {
          for (int j = 0; j < m; j++) {
              cout << arr[i][j] << "\t";
           }
          cout << endl;
      }
}

int main() {
    int r, c, k;
    cout << "Enter row and column respectively : ";
    cin >> r >> c;
    int **arr = new int*[r];
    for (int i = 0; i < r; i++)
    {
        arr[i] = new int[c];
    } 
  cout << " Enter element in array ";
  inputArray(arr, r, c);
  cout << "Enter key to search ";
  cin >> k;
  cout << "Array is " << endl;
  printArray(arr, r, c);
  int ans = search2DMatTwo(arr, r, c, k);
  if (ans) {
      cout << k << " is present in array";
  } else {
      cout << k << " is not present in array";
  }
    
}