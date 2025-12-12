// Format file: clang-format -i yourfile.c
/*
Bài 8: Viết chương trình nhập vào một số nguyên dương 𝑁 (𝑁 ≥ 2). Kiểm tra xem 𝑁
có phải là số nguyên tố hay không và in ra kết luận.
*/

#include <math.h>
#include <stdio.h>

int main() {
  // Input: n
  int n;

  printf("Nhap so n: ");
  scanf("%d", &n);

  // Check n < 2
  if (n < 2) {
    printf("Nhap sai n");
    return 0;
  }

  // Mặc định là số nguyên tố
  int isPrime = 1;

  // Solve...
  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) {
      isPrime = 0;
      // Dừng khi tìm ra ước
      break;
    }
  }

  if (isPrime) {
    printf("So %d la so nguyen to", n);
  } else {
    printf("So %d khong la so nguyen to", n);
  }

  return 0;
}
