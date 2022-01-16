#include <stdio.h>

void SelectionSort(int* a, size_t n) {
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (a[i] > a[j]) {
        int t = a[i];
        a[i] = a[j];
        a[j] = t;
      }
    }
  }
}

void _testSelectionSort() {
  int a[5] = {4, 2, 5, 1, 3};
  SelectionSort(a, 5);
  for (int i = 0; i < 5; i++) {
    printf("%d ", a[i]);
  }
}

int main() {
  _testSelectionSort();
  return 0;
}