#include <iostream>
using namespace std;

int search2DMat(int **arr, int n, int m, int key) {
  int s = 0;
  int e = n * m - 1;
  while (s <= e) {
    int mid = s + (e - s)/2;
    int element = arr[mid / m][mid % m]; 
    if (element == key) {
        return 1;
    } else if ( element > key) {
      e = mid - 1;
    } else {
      s = mid +1;
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
  int **arr = new int*[r]; // Allocate memory for rows
  for (int i = 0; i < r; ++i) {
    arr[i] = new int[c]; // Allocate memory for columns of each row
  }
  cout << " Enter element in array ";
  inputArray(arr, r, c);
  cout << "Enter key to search ";
  cin >> k;
  cout << "Array is " << endl;
  printArray(arr, r, c);
  int ans = search2DMat(arr, r, c, k);
  if (ans) {
      cout << k << " is present in array";
  } else {
      cout << k << " is not present in array";
  }
  return 0;
}
