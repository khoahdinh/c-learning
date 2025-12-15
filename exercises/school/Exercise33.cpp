// Format file: clang-format -i yourfile.c
/*
Bài 33: Nhập vào chiều cao ℎ và chiều rộng 𝑤. Dùng các dấu ∗ để vẽ một hình chữ nhật rỗng
có kích thước tương ứng. Ví dụ: ℎ = 4, 𝑤 = 10.
* * * * * * * * * *
*                 *
*                 *
* * * * * * * * * *
Tips: Giống bài 23
*/

#include <stdio.h>

int main() {
   
  // Input: w, h
  int w, h;

  printf("Nhap chieu cao va chieu rong: ");
  scanf("%d %d", &h, &w);

  // Check h, w
  if (h < 2 || w < 2) {
    printf("Nhap sai chieu cao va rong");
    return 0;
  }

  // Print hollow rectangle
  for (int i = 1; i <= h; i++) {
    for (int j = 1; j <= w; j++) {
      if (i == 1 || i == h || j == 1 || j == w) {
        printf("* ");
      } else {
        printf("  ");
      }
    }
    printf("\n");
  }

  return 0;
}
