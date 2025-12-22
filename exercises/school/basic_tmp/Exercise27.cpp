// Format file: clang-format -i yourfile.c
/*
Bài 27: Viết chương trình nhập vào một số nguyên dương 𝑁 (𝑁 > 2). In ra 𝑁 số đầu
tiên trong dãy Fibonacci. Dãy Fibonacci: 0, 1, 1, 2, 3, 5, 8, 13

0 + 1 = 1
1 + 1 = 2
1 + 2 = 3
2 + 3 = 5
*/

#include <stdio.h>

int main() {
  // Input: n,
  int n;

  printf("Nhap so N nguyen duong (N>2): ");
  scanf("%d", &n);

  // Check N
  if (n <= 2) {
    printf("N phai lon hon 2!");
    return 0;
  }

  // First two Fibonacci numbers
  int first = 0;
  int second = 1;
  int next;

  // Print first two numbers
  printf("%d %d", first, second);

  // Generate remaining Fibonacci numbers
  for (int i = 3; i <= n; i++) {
    next = first + second;
    printf(" %d", next);

    // Update values for next iteration
    first = second;
    second = next;
  }

  return 0;
}
