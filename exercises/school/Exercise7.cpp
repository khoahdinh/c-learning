// Format file: clang-format -i yourfile.c
/*
Bài 7: Viết chương trình nhập vào một số nguyên dương 𝑁. Tìm và in ra số đảo
ngược của 𝑁. • Ví dụ: Nhập 12345, in ra 54321.
*/

#include <stdio.h>

int main() {
  // Input: n
  int n, reversed = 0;

  printf("Nhap so n: ");
  scanf("%d", &n);

  // Check n >= 0
  if (n < 0) {
    printf("Nhap sai n");
    return 0;
  }
  // Save variable x for printing
  int temp = n;

  // Solve...
  while (n != 0) {
    int digit = n % 10;
    reversed = reversed * 10 + digit;
    n = n / 10;
  }

  printf("So dao nguoc cua %d la: %d", temp, reversed);

  return 0;
}
