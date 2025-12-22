// Format file: clang-format -i yourfile.c
/*
Bài 14: Viết chương trình nhập vào một số nguyên dương 𝑁. Tính và in ra tổng của
tất cả các số chẵn từ 1 đến 𝑁.
*/

#include <stdio.h>

int main() {

  // Input: n
  int n, Sum = 0;

  printf("Nhap so n: ");
  scanf("%d", &n);

  // Check n >= 0
  if (n < 0) {
    printf("Nhap sai n");
    return 0;
  }

  // Sum caculation
  if (n < 2) {
    Sum = 0;
  } else if (n == 2) {
    Sum = 2;
  } else {
    for (int i = 2; i <= n; i = i + 2) {
      Sum = Sum + i;
    }
  }

  printf("Tong tat ca cac so chan tu 1 - %d = %d", n, Sum);

  return 0;
}
