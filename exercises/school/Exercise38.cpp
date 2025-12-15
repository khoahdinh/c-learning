// Format file: clang-format -i yourfile.c
/*
Bài 38: Viết chương trình nhập vào một số tiền nguyên dương (đơn vị: VNĐ). Liệt
kê các phương án đổi tiền có thể có bằng cách sử dụng các loại tiền 5000đ, 2000đ
và 1000đ sao cho tổng số tờ tiền là ít nhất.

*/

#include <stdio.h>

int main() {

  // Input: money
  int money;

  printf("Nhap so tien can doi: ");
  scanf("%d", &money);

  // Check money
  if (money < 1000) {
    printf("Nhap sai so tien");
    return 0;
  }

  int count_5000 = 0, count_2000 = 0, count_1000 = 0;

  while (money - 5000 >= 0) {
    money = money - 5000;
    count_5000++;
  }

  while (money - 2000 >= 0) {
    money = money - 2000;
    count_2000++;
  }

  while (money - 1000 >= 0) {
    money = money - 1000;
    count_1000++;
  
  printf("Tien 5000: %d\n", count_5000);
  printf("Tien 2000: %d\n", count_2000);
  printf("Tien 1000: %d\n", count_1000);

  return 0;
}
