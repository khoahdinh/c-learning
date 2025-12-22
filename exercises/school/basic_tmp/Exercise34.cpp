// Format file: clang-format -i yourfile.c
/*
Bài 34: Nhập vào chiều cao ℎ. Vẽ một tam giác vuông cân bằng dấu * như ví dụ.
• Ví dụ: ℎ = 5

*
* * *
* * * *
* * * * *

Tips: Giống bài 22

*/

#include <stdio.h>

int main() {

  // Input: h
  int h;

  printf("Nhap chieu cao h: ");
  scanf("%d", &h);

  // Check h
  if (h < 2) {
    printf("Nhap sai chieu cao");
    return 0;
  }

  // Print *
  for (int i = 1; i <= h; i++) {
    for (int j = 0; j < i; j++) {
      printf("* ");
    }
    printf("\n");
  }

  return 0;
}
