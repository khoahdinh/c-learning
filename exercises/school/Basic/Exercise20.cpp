// Format file: clang-format -i yourfile.c
/*
Bài 20: Viết chương trình nhập vào hai số nguyên dương 𝑎 và 𝑏. Tìm và in ra bội
chung nhỏ nhất của chúng.
*/

#include <stdio.h>

int main() {

  // Input: a,b
  int a, b;

  printf("Nhap a va b nguyen duong: ");
  scanf("%d %d", &a, &b);

  // Check a, b la so nguyen duong
  if (a < 1 || b < 1) {
    printf("Nhap sai a va b");
    return 0;
  }

  int temp1 = a, temp2 = b;

  // Tìm UCLN
  while (a != b) {
    if (a > b) {
      a = a - b;
    } else {
      b = b - a;
    }
  }

  // BCNN
  int bcnn = (temp1 * temp2) / a;

  printf("Boi chung nho nhat cua %d va %d la: %d", temp1, temp2, bcnn);

  return 0;
}
