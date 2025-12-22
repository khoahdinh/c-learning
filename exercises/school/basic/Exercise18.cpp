// Format file: clang-format -i yourfile.c
/*
Bài 18: Viết chương trình nhập vào một số nguyên dương 𝑁. In ra tất cả các số từ
1 đến 𝑁 mà chia hết cho cả 3 và 5.
*/

#include <stdio.h>

int main() {

  // Input: n
  int n;

  printf("Nhap so n: ");
  scanf("%d", &n);

  // Check n la so nguyen duong
  if (n < 1) {
    printf("Nhap sai n");
    return 0;
  }

  printf("Cac so tu 1 - %d chia het cho 3 va 5 la: ", n);

  for (int i = 15; i <= n; i++) {
    if (i % 15 == 0) {
      printf("%d ", i);
    }
  }

  return 0;
}
