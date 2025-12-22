// Format file: clang-format -i yourfile.c
/*
Bài 22: Viết chương trình nhập vào chiều cao ℎ. Vẽ một tam giác vuông cân đặc có
chiều cao ℎ bằng các dấu *. • Ví dụ: Với ℎ = 4, output sẽ là:

*
* *
* * *
* * * *

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
