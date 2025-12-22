// Format file: clang-format -i yourfile.c
/*
Bài 23: Viết chương trình nhập vào chiều dài 𝑑 và chiều rộng 𝑟. Vẽ một hình chữ
nhật rỗng có kích thước tương ứng. • Ví dụ: Với 𝑑 = 7, 𝑟 = 4, output sẽ là:
* * * * * * *
*           *
*           *
* * * * * * *

*/

#include <stdio.h>

int main() {

  // Input: d, r
  int d, r;

  printf("Nhap chieu dai va chieu rong: ");
  scanf("%d %d", &d, &r);

  // Check d, r
  if (d < 2 || r < 2) {
    printf("Nhap sai chieu dai va rong");
    return 0;
  }

  // Print hollow rectangle
  for (int i = 1; i <= r; i++) {
    for (int j = 1; j <= d; j++) {
      if (i == 1 || i == r || j == 1 || j == d) {
        printf("* ");
      } else {
        printf("  ");
      }
    }
    printf("\n");
  }

  return 0;
}
