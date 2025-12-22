// Format file: clang-format -i yourfile.c
/*
Bài 19: Viết chương trình nhập vào hai số nguyên dương 𝑎 và 𝑏. Tìm và in ra màn
hình ước chung lớn nhất của chúng bằng thuật toán Euclid (lặp trừ hoặc chia lấy
dư).
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

  while (a != b) {
    if (a > b) {
      a = a - b;
    } else {
      b = b - a;
    }
  }

  printf("Uoc chung lon nhat cua %d va %d la: %d", temp1, temp2, a);

  return 0;
}
