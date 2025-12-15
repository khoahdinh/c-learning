// Format file: clang-format -i yourfile.c
/*
Bài 31: Viết chương trình nhập vào một số nguyên dương 𝑁. In ra tất cả các ước
số của 𝑁.
*/

#include <stdio.h>

int main() {

  // Input: N
  int n;

  printf("Nhap so n: ");
  scanf("%d", &n);

  // Check N
  if (n < 1) {
    printf("Nhap sai so N!");
    return 0;
  }

  printf("Cac uoc cua so %d: ", n);

  for (int i = 1; i <= n; i++) {
    if (n % i == 0) {
      printf(" %d", i);
    }
  }

  return 0;
}
