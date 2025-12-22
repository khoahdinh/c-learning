// Format file: clang-format -i yourfile.c
/*
Bài 14: Viết chương trình nhập vào một số nguyên dương 𝑁. Tính và in ra tổng của
tất cả các số chẵn từ 1 đến 𝑁.
*/

#include <stdio.h>

int main() {

  // Input: n
  int n;

  printf("Nhap so n: ");
  scanf("%d", &n);

  // Check n >= 0
  if (n < 0) {
    printf("Nhap sai n");
    return 0;
  }

  // Sum caculation: Tổng số chẵn = (số lượng) × (số đầu + số cuối) / 2
  int lastEven = (n % 2 == 0) ? n : n - 1;
  int count = lastEven / 2;
  int Sum = count * (2 + lastEven) / 2;

  printf("Tong tat ca cac so chan tu 1 - %d = %d", n, Sum);

  return 0;
}
