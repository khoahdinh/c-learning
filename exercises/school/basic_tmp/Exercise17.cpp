// Format file: clang-format -i yourfile.c
/*
Bài 17: Viết chương trình nhập vào một số nguyên dương 𝑁. Tìm và in ra chữ số
lớn nhất tạo nên số đó. Ví dụ: Nhập 75391, kết quả là 9
*/

#include <stdio.h>

int main() {

  // Input: n
  int n, max = -1;

  printf("Nhap so n: ");
  scanf("%d", &n);

  // Check n la so nguyen duong
  if (n < 1) {
    printf("Nhap sai n");
    return 0;
  }

  int temp = n;

  while (n != 0) {
    int digit = n % 10;

    if (digit > max)
      max = digit;

    n = n / 10;
  }

  printf("So %d co chu so lon nhat la : %d", temp, max);

  return 0;
}
