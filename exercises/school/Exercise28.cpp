// Format file: clang-format -i yourfile.c
/*
Bài 28: Viết chương trình nhập vào một số nguyên dương 𝑁. Kiểm tra xem 𝑁 có phải
là số đối xứng hay không. • Ví dụ: 121, 3443, 98789 là các số đối xứng.
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

  //printf("So dao nguoc cua %d la: %d\n", temp, reversed);

  // Check so doi xung
  if (temp == reversed) {
    printf("So %d la so doi xung", temp);
  } else {
    printf("So %d khong phai la so doi xung", temp);
  }

  return 0;
}