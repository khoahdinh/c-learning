// Format file: clang-format -i yourfile.c
/*
Bài 6: Viết chương trình nhập vào một số nguyên không âm 𝑁! (𝑁 > 0). Tính và in
ra 𝑁! • Quy ước: 0! = 1.
*/

#include <stdio.h>

int main() {
  // Input: n
  int n;
  unsigned long long result =1;

  printf("Nhap so n: ");
  scanf("%d", &n);

  // Check n >= 0
  if (n < 0) {
    printf("Nhap sai n");
    return 0;
  }

  // Solve...
  if (n == 0) {
    result = 1;
  } else {
    int i = 1;
    while (i <= n) {
      result = result * i;
      i++;
    }
  }

  printf("Ket qua giai thua cua so %d! = %d", n, result);

  return 0;
}
