// Format file: clang-format -i yourfile.c
/*
Bài 11: Viết chương trình nhập vào một số nguyên 𝑁 và kiểm tra xem 𝑁 là số chẵn
hay số lẻ. In kết quả ra màn hình.
*/

#include <stdio.h>

int main() {

  // Input: n
  int n;

  printf("Nhap so n: ");
  scanf("%d", &n);

  if (n % 2 == 0) {
    printf("So %d la so chan", n);
  } else {
    printf("So %d la so le", n);
  }

  return 0;
}
