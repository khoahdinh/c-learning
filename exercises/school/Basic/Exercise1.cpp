// Format file: clang-format -i yourfile.c
/*

Bài 1: Viết chương trình nhập vào chiều dài và chiều rộng của một hình chữ nhật
(kiểu số thực). Tính toán và in ra màn hình chu vi và diện tích của hình chữ
nhật đó.
*/

#include <stdio.h>

int main() {
  // Input: rectangle length and width
  float length, width;

  printf("Nhap chieu dai: ");
  scanf("%f", &length);

  printf("Nhap chieu rong: ");
  scanf("%f", &width);

  // Calculate perimeter and area
  float perimeter = (length + width) * 2;
  float area = length * width;

  // Output result
  printf("Chu vi cua hinh chu nhat la = %.2f \n", perimeter);
  printf("Dien tich cua hinh chu nhat la = %.2f", area);

  return 0;
}


