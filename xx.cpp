#include <cmath>
#include <iostream>
using namespace std;

int *bubbleSort(int arr[], int n);

int main() {

  int k;
  cin >> k;
  int arr[k];
  int n;
  for (int i = 0; i < k; i++) {
    cin >> n;
    arr[i] = n;
  }

  int *xx = bubbleSort(arr, k);
  for (int i = 0; i < k; i++) {
    cout << xx[i] << ' ';
  }
  return 0;
}

int *bubbleSort(int arr[], int n) {
  for (int i = 0; i < n - 1; ++i) {
    for (int j = 0; j < n - i - 1; ++j) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
      }
    }
  }

  return arr;
}