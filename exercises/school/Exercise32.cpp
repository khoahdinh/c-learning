// Format file: clang-format -i yourfile.c
/*
Bài 32: Viết chương trình nhập vào một số nguyên dương 𝑁. Tính và in ra tổng tất cả các ước
số dương của 𝑁.
*/

#include <stdio.h>

int main() {

  // Input: N
  int n, sum = 0;

  printf("Nhap so n: ");
  scanf("%d", &n);

  // Check N
  if (n < 1) {
    printf("Nhap sai so N!");
    return 0;
  }

  printf("Cac uoc cua so %d: ", n);

  for (int i = 1; i <= n; i++) {
    if (n % i == 0) {
      printf(" %d", i);
      sum = sum + i;
    }
  }

  printf("\n");
  printf("Tong tat ca cac uoc cua so %d la: %d", n, sum);

  return 0;
}
