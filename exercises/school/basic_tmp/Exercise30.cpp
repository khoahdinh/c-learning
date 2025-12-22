// Format file: clang-format -i yourfile.c
/*
Bài 30: Tính 𝑆 = 1 − 2 + 3 − 4 + . . . + (−1)^(N+1) × 𝑁 với 𝑁 nhập từ bàn phím.
*/

#include <stdio.h>

int main() {

  // Input: n
  int n, sum = 0;

  printf("Nhap do dai N cua tong S can tinh: ");
  scanf("%d", &n);

  // Check N
  if (n < 0) {
    printf("Nhap sai N!");
    return 0;
  }

  for (int i = 1; i <= n; i++) {
    // Số chẵn cộng, số lẽ trừ
    sum += (i % 2 == 0) ? -i : i;
  }

  printf("Tong: 1 - 2 + 3 ... = %d", sum);

  return 0;
}