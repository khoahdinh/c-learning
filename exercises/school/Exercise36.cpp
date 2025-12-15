// Format file: clang-format -i yourfile.c
/*
Bài 36: Nhập vào cạnh 𝑐 và chiều cao ℎ. Vẽ một hình bình hành rỗng bằng dấu *.
• Ví dụ: 𝑐 = 7, ℎ = 4
* * * * * * *
 *           *
  *           *
   * * * * * * *

*/

#include <stdio.h>

int main() {

  // Input: h, c
  int h, c;

  printf("Nhap chieu cao va canh cua hinh binh hanh: ");
  scanf("%d %d", &h, &c);

  // Check h, w
  if (h < 2 || c < 2) {
    printf("Nhap sai chieu cao va rong");
    return 0;
  }

  int leadingSpaces = 0; // Số khoảng trắng đầu dòng

  // Print hollow parallelogram
  for (int i = 1; i <= h; i++) {

    for (int space = 0; space < leadingSpaces; space++) {
      printf("  ");
    }

    for (int j = 1; j <= c; j++) {
      if (i == 1 || i == h || j == 1 || j == c) {
        printf("* ");
      } else {
        printf("  ");
      }
    }

    printf("\n");

    // Update variable
    leadingSpaces++;
  }

  return 0;
}
