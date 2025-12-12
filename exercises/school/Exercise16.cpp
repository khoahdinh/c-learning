// Format file: clang-format -i yourfile.c
/*
Bài 16: Viết chương trình nhập vào một số nguyên dương 𝑁. Tính và in ra tổng các
chữ số của 𝑁. • Ví dụ: Nhập 7531, kết quả là 7 + 5 + 3 + 1 = 16.
*/

#include <stdio.h>

int main() {

  // Input: n
  int n, sum = 0;

  printf("Nhap so n: ");
  scanf("%d", &n);

  // Check n la so nguyen duong
  if (n < 1) {
    printf("Nhap sai n");
    return 0;
  }

  int temp = n;

  while (n != 0) {
    sum = sum + (n % 10);
    n = n / 10;
  }

  printf("So %d co tong cac chu so = %d", temp, sum);

  return 0;
}
