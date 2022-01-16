#include <stdio.h>

void BubbleSort(int* a, size_t n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (a[j] > a[j + 1]) {
        int t = a[j];
        a[j] = a[j + 1];
        a[j + 1] = t;
      }
    }
  }
}

void _testBubbleSort() {
  int a[5] = {4, 2, 5, 1, 3};
  BubbleSort(a, 5);
  for (int i = 0; i < 5; i++) {
    printf("%d ", a[i]);
  }
}

int main() {
  _testBubbleSort();
  return 0;
}
