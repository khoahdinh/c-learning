// Format file: clang-format -i yourfile.c
/*
Bài 25: Viết chương trình nhập vào số 𝑘𝑚 đã đi. Tính tiền cước taxi theo quy
tắc: • 1km đầu tiên: 15.000 VNĐ. • Từ km thứ 2 đến km thứ 5: 13.500 VNĐ/km. • Từ
km thứ 6 trở đi: 11.000 VNĐ/km. • Nếu đi hơn 120km thì được giảm 10% trên tổng
số tiền.
*/

#include <stdio.h>

int main() {

  // Input: km
  float km;
  double total = 0;

  printf("Nhap so km da di: ");
  scanf("%f", &km);

  // Check km
  if (km < 0) {
    printf("Nhap sai so km");
    return 0;
  }

  // Total caculation
  if (km <= 1) {
    total = km * 15000;
  } else if (km <= 5) {
    total = 15000 + (km - 1) * 13500;
  } else {
    total = 15000 + 4 * 13500 + (km - 5) * 11000;
  }
  // Case: km > 120
  if (km > 120) {
    total = total * 0.9;
  }

  printf("Cuoc taxi: %.2f", total);

  return 0;
}
