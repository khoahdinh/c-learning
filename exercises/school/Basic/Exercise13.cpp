// Format file: clang-format -i yourfile.c
/*
Bài 13: Viết chương trình nhập vào số kWh điện tiêu thụ. Tính tiền điện phải trả
theo quy tắc bậc thang: • Bậc 1: Từ 0 - 50 kWh: 1.678 VND/kWh • Bậc 2: Từ 51 -
100 kWh: 1.734 VND/kWh • Bậc 3: Từ 101 kWh trở lên: 2.014 VND/kWh
*/

#include <stdio.h>

int main() {

  // Input: kwh, bill
  int kwh, bill;

  printf("Nhap so dien tieu thu (kWh): ");
  scanf("%d", &kwh);

  // Check kwh
  if (kwh < 0) {
    printf("Nhap sai so dien tieu thu");
    return 0;
  }

  // Bill caculation
  if (kwh <= 50) {
    bill = kwh * 1678;
  } else if (kwh <= 100) {
    bill = 50 * 1678 + (kwh - 50) * 1734;
  } else {
    bill = 50* 1678 + 50 * 1734 + (kwh - 100) * 2014;
  }

  printf("So tien dien phai tra cua hoa don %dkWh la: %d VND", kwh, bill);

  return 0;
}
