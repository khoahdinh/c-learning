// Format file: clang-format -i yourfile.c
/*
Bài 2: Viết chương trình nhập vào 3 số nguyên 𝑎, 𝑏, 𝑐.
Tìm và in ra màn hình số lớn nhất trong ba số này.
*/

#include <stdio.h>

int main() {
  // Input: a, b, c
  int a, b, c;

  printf("Nhap ba so nguyen a, b, c: ");
  scanf("%d %d %d", &a, &b, &c);

  // Check if max is a or b or c
  int max = a;
  if (b > max)
    max = b;
  if (c > max)
    max = c;

  printf("So lon nhat trong ba so la: %d\n", max);

  return 0;
}
