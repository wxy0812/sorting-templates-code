#include <stdio.h>

void swap(int& a, int& b) {
  int t = a;
  a = b;
  b = t;
}

void QuickSort(int* a, int n) {
  if (n <= 1) return;
  int l = 0, r = n - 1;
  int key = a[0];
  while (l < r) {
    while (l < r && a[r] >= key) r--;
    swap(a[l], a[r]);
    while (l < r && a[l] <= key) l++;
    swap(a[l], a[r]);
  }
  a[l] = key;
  QuickSort(a, l);
  QuickSort(a + l + 1, n - l - 1);
}

void _testQuickSort() {
  int a[5] = {4, 2, 5, 1, 3};
  QuickSort(a, 5);
  for (int i = 0; i < 5; i++) {
    printf("%d ", a[i]);
  }
}

int main() {
  _testQuickSort();
  return 0;
}