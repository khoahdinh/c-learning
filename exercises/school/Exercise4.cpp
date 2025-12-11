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

  if (year % 400 == 0 || ((year % 4 == 0) && (year % 100 != 0))) {
    switch (month) {
    case 1:
      printf("So ngay cua thang %d nam %d la: 31 ngay", month, year);
      break;
    case 2:
      printf("So ngay cua thang %d nam %d la: 29 ngay", month, year);
      break;
    case 3:
      printf("So ngay cua thang %d nam %d la: 31 ngay", month, year);
      break;
    case 4:
      printf("So ngay cua thang %d nam %d la: 30 ngay", month, year);
      break;
    case 5:
      printf("So ngay cua thang %d nam %d la: 31 ngay", month, year);
      break;
    case 6:
      printf("So ngay cua thang %d nam %d la: 30 ngay", month, year);
      break;
    case 7:
      printf("So ngay cua thang %d nam %d la: 31 ngay", month, year);
      break;
    case 8:
      printf("So ngay cua thang %d nam %d la: 31 ngay", month, year);
      break;
    case 9:
      printf("So ngay cua thang %d nam %d la: 30 ngay", month, year);
      break;
    case 10:
      printf("So ngay cua thang %d nam %d la: 31 ngay", month, year);
      break;
    case 11:
      printf("So ngay cua thang %d nam %d la: 30 ngay", month, year);
      break;
    case 12:
      printf("So ngay cua thang %d nam %d la: 31 ngay", month, year);
      break;

    default:
      break;
    }
  } else {
    switch (month) {
    case 1:
      printf("So ngay cua thang %d nam %d la: 31 ngay", month, year);
      break;
    case 2:
      printf("So ngay cua thang %d nam %d la: 28 ngay", month, year);
      break;
    case 3:
      printf("So ngay cua thang %d nam %d la: 31 ngay", month, year);
      break;
    case 4:
      printf("So ngay cua thang %d nam %d la: 30 ngay", month, year);
      break;
    case 5:
      printf("So ngay cua thang %d nam %d la: 31 ngay", month, year);
      break;
    case 6:
      printf("So ngay cua thang %d nam %d la: 30 ngay", month, year);
      break;
    case 7:
      printf("So ngay cua thang %d nam %d la: 31 ngay", month, year);
      break;
    case 8:
      printf("So ngay cua thang %d nam %d la: 31 ngay", month, year);
      break;
    case 9:
      printf("So ngay cua thang %d nam %d la: 30 ngay", month, year);
      break;
    case 10:
      printf("So ngay cua thang %d nam %d la: 31 ngay", month, year);
      break;
    case 11:
      printf("So ngay cua thang %d nam %d la: 30 ngay", month, year);
      break;
    case 12:
      printf("So ngay cua thang %d nam %d la: 31 ngay", month, year);
      break;

    default:
      break;
    }
  }

  return 0;
}
