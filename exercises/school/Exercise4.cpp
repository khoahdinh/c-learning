// Format file: clang-format -i yourfile.c
/*
Bài 4: Viết chương trình nhập vào một tháng (số nguyên từ 1 đến 12) và một năm
(số nguyên). In ra số ngày của tháng đó
*/

#include <stdio.h>

int main() {
  // Input: year, month
  int year, month;

  printf("Nhap so thang (1-12) va so nam: ");
  scanf("%d %d", &month, &year);

  // Kiem tra thang
  if (month < 1 || month > 12) {
    printf("Thang khong hop le");
  }

  // Kiem tra nam nhuan, trả về true hoac false
  int namNhuan = (year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0));

  int days;

  switch (month) {
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12:
    days = 31;
    break;

  case 4:
  case 6:
  case 9:
  case 11:
    days = 30;
    break;

  case 2:
    days = namNhuan ? 29 : 28;
    break;
  }

  printf("So ngay cua thang %d nam %d la: %d", month, year, days);

  return 0;
}
