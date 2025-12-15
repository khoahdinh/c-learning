// Format file: clang-format -i yourfile.c
/*
Bài 35: Nhập vào chiều cao ℎ của tam giác cân. Vẽ tam giác cân đó bằng dấu *.
• Ví dụ: ℎ = 4

      *
    * * *
  * * * * *
* * * * * * *

*/

#include <stdio.h>

int main() {

  // Input: height
  int h;

  printf("Nhap chieu cao h: ");
  scanf("%d", &h);

  // Check h
  if (h < 1) {
    printf("Nhap sai chieu cao");
    return 0;
  }

  int starCount = 1;     // Số lượng dấu * mỗi dòng
  int leadingSpaces = h; // Số khoảng trắng đầu dòng

  // Print triangle
  for (int row = 1; row <= h; row++) {

    // In khoảng trắng đầu dòng
    for (int space = 0; space < leadingSpaces; space++) {
      printf("  ");
    }

    // Print *
    for (int star = 0; star < starCount; star++) {
      printf(" *");
    }

    printf("\n");

    // Cập nhật giá trị biến cho lần lặp sau
    leadingSpaces--;
    starCount = starCount + 2;
  }

  return 0;
}
