#include <iostream>
using namespace std;


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
    int r, c, key;
    cout << "Enter row and column respectively : ";
    cin >> r >> c;
    int *arr = new int*[r];
    for (int i = 0; i < r; i++)
    {
        int *arr[i] = new int*[c];
    }
    
}