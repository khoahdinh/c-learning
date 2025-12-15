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
  if (money < 1000 || money % 1000 != 0) {
    printf("Nhap sai so tien");
    return 0;
  }

  int count5000 = 0, count2000 = 0, count1000 = 0;

  while (money - 5000 >= 0) {
    money = money - 5000;
    count5000++;
  }

  while (money - 2000 >= 0) {
    money = money - 2000;
    count2000++;
  }

  while (money - 1000 >= 0) {
    money = money - 1000;
    count1000++;
  }

  printf("Tien 5000: %d to\n", count5000);
  printf("Tien 2000: %d to\n", count2000);
  printf("Tien 1000: %d to\n", count1000);

  return 0;
}
