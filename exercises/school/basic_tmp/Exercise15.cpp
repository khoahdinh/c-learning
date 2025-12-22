// Format file: clang-format -i yourfile.c
/*
Bài 15: Viết chương trình nhập vào một số nguyên dương 𝑁. Đếm và in ra xem số đó
có bao nhiêu chữ số. • Ví dụ: Nhập 7531, kết quả là 4.
*/

#include <stdio.h>

int main() {

  // Input: n
  int n, count = 0;

  printf("Nhap so n: ");
  scanf("%d", &n);

  // Check n la so nguyen duong
  if (n < 1) {
    printf("Nhap sai n");
    return 0;
  }

  int temp = n;

  while (n != 0) {
    n = n / 10;
    count++;
  }

  printf("So %d co: %d chu so", temp, count);

  return 0;
}
