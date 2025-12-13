// Format file: clang-format -i yourfile.c
/*
Bài 21: Viết chương trình nhập vào một số nguyên dương 𝑁. Kiểm tra xem 𝑁 có phải
là số hoàn hảo hay không. Số hoàn hảo là số có tổng các ước số dương (không kể
chính nó) bằng chính nó. • Ví dụ: 6 có các ước là 1, 2, 3 và 1 + 2 + 3 = 6.
*/

#include <stdio.h>

int main() {

  // Input: n
  int n, sum = 1;

  printf("Nhap n nguyen duong: ");
  scanf("%d", &n);

  // Check n la so nguyen duong
  if (n < 1) {
    printf("Nhap sai n");
    return 0;
  }

  // Special case
  if (n==1)
  {
    printf("So 1 khong phai la so hoan hao");
    return 0;
  }
  
  // Tim tong cac uoc
  for (int i = 2; i <= (n / 2); i++) {
    if (n % i == 0) {
      sum = sum + i;
    }
  }

  // Tim so hoan hao
  if (sum == n) {
    printf("So %d la so hoan hao", n);
  } else {
    printf("So %d khong la so hoan hao", n);
  }

  return 0;
}
