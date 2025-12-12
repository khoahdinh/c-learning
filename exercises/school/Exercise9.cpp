// Format file: clang-format -i yourfile.c
/*
Bài 9: Viết chương trình yêu cầu người dùng nhập vào các số nguyên. Chương trình
sẽ cộng dồn các số này lại. Nếu người dùng nhập số 0, chương trình dừng lại và
in ra tổng của tất cả các số đã nhập (không bao gồm số 0).
*/

#include <math.h>
#include <stdio.h>

int main() {
  // Input: n
  int n, Sum = 0;

  do {
    printf("Nhap so nguyen (nhap 0 de dung): ");
    scanf("%d", &n);
    if (n != 0)
      Sum = Sum + n;
  } while (n != 0);

  printf("Tong cac so da nhap la: %d", Sum);

  return 0;
}
