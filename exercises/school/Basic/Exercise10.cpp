// Format file: clang-format -i yourfile.c
/*
Bài 10: Viết chương trình in ra màn hình bảng cửu chương từ 2 đến 9
*/

#include <stdio.h>

int main() {

  for (int i = 2; i < 10; i++) {
    printf("Bang cuu chuong %d:\n", i);
    for (int j = 1; j <= 10; j++) {
      printf("%d x %d = %d\n", i, j, i * j);
    }
    // Thêm dòng trống
    printf("\n");
  }

  return 0;
}
