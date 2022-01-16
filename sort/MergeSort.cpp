#include <stdio.h>

void merge(int* a, size_t n, size_t m) {
  int* b = new int[n + m];
  int h1 = 0, h2 = n;
  for (int i = 0; i < n + m; i++) {
    if (h2 == n + m || (h1 != n && a[h1] < a[h2])) {
      b[i] = a[h1];
      h1++;
    } else {
      b[i] = a[h2];
      h2++;
    }
  }
  for (int i = 0; i < n + m; i++) {
    a[i] = b[i];
  }
  delete[] b;
}

void MergeSort(int* a, size_t n) {
  if (n <= 1) return;
  MergeSort(a, n / 2);
  MergeSort(a + n / 2, n - n / 2);
  merge(a, n / 2, n - n / 2);
}

void _testMergeSort() {
  int a[5] = {4, 2, 5, 1, 3};
  MergeSort(a, 5);
  for (int i = 0; i < 5; i++) {
    printf("%d ", a[i]);
  }
}

int main() {
  _testMergeSort();
  return 0;
}