// Format file: clang-format -i yourfile.c
/*
Bài 37: Nhập vào chiều cao ℎ. In ra tam giác số (Floyd's Triangle) như sau:
• Ví dụ: ℎ = 4
1
2 3
4 5 6
7 8 9 10

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

  // number: bắt đầu từ 1 và tăng dần sau mỗi lần in
  int number = 1;

  // In tam giác Floyd
  for (int i = 1; i <= h; i++) {
    for (int j = 0; j < i; j++) {
      printf("%d ", number);
      number++;
    }
    printf("\n");
  }

  return 0;
}
