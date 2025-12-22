// Format file: clang-format -i yourfile.c
/*
Bài 5: Viết chương trình nhập vào một số nguyên dương 𝑁. Tính và in ra tổng 𝑆 =
1 + 2 + 3 + ⋯ + 𝑁.
*/

#include <stdio.h>

int main() {
  // Input: n
  int n;

  printf("Nhap so n: ");
  scanf("%d", &n);

  // Check n > 0
  if (n < 0) {
    printf("Nhap sai n");
    return 0;
  }

  int sum = (n * (n + 1)) / 2;

  printf("Tong tu 1 - %d = %d", n, sum);

  return 0;
}
