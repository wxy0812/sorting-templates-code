#include <stdio.h>

void CountSort(int* a, size_t n) {
  int max = 0x80000000, min = 0x7fffffff;
  for (int i = 0; i < n; i++) {
    if (a[i] < min) min = a[i];
    if (a[i] > max) max = a[i];
  }
  int* cnt = new int[max - min + 1];
  for (int i = 0; i <= max - min; i++) {
    cnt[i] = 0;
  }
  for (int i = 0; i < n; i++) {
    cnt[a[i] - min]++;
  }
  int len = 0;
  for (int i = 0; i <= max - min; i++) {
    for (int j = 0; j < cnt[i]; j++) {
      a[len++] = i + min;
    }
  }
  delete[] cnt;
}

void _testCountSort() {
  int a[5] = {4, 2, 5, 1, 3};
  CountSort(a, 5);
  for (int i = 0; i < 5; i++) {
    printf("%d ", a[i]);
  }
}

int main() {
  _testCountSort();
  return 0;
}