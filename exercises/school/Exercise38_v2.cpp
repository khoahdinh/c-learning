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

  printf("Nhap so tien can doi (VND): ");
  scanf("%d", &money);

  // Check input
  if (money < 1000 || money % 1000 != 0) {
    printf("So tien khong hop le");
    return 0;
  }

  int count5000 = money / 5000;
  money %= 5000;

  int count2000 = money / 2000;
  money %= 2000;

  int count1000 = money / 1000;

  printf("Tien 5000d: %d to\n", count5000);
  printf("Tien 2000d: %d to\n", count2000);
  printf("Tien 1000d: %d to\n", count1000);

  return 0;
}