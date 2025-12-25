#include <stdio.h>

// Include để sử dụng lại các hàm đã viết
#include "calculate.h"
#include "check.h"
#include "print.h"

// 34. printMenu(): In ra một menu (ví dụ: "1. Chức năng A", "2. Chức năng B",
// "3. Thoát").

void printMenu() {

  printf("1. Chuc nang A\n");
  printf("2. Chuc nang B\n");
  printf("0. Thoat\n");
}

// 35. printMultiplicationTable(int n): In ra bảng cửu chương của n.

void printMultiplicationTable(int n) {

  if (n < 2) {
    printf("Invalid input\n");
    return;
  }

  for (int i = 1; i <= 10; i++) {
    printf("%d x %d = %d\n", n, i, n * i);
  }
}

/* 36. printAllMultiplicationTables(): In ra tất cả các bảng cửu chương từ 2 đến
9 (gọi printMultiplicationTable nhiều lần). */

void printAllMultiplicationTables() {

  for (int i = 2; i <= 9; i++) {
    printMultiplicationTable(i);
  }
}

// 37. printSquare(int size): In ra hình vuông đặc bằng dấu * kích thước size x
// size.

void printSquare(int size) {

  if (size < 1) {
    printf("Invalid input\n");
    return;
  }

  for (int i = 1; i <= size; i++) {
    for (int j = 1; j <= size; j++) {
      printf(" *");
    }
    printf("\n");
  }
}

/* 38. printHollowRectangle(int width, int height): In ra hình chữ nhật rỗng
kích thước width x height. */

void printHollowRectangle(int width, int height) {

  if (width < 1 || height < 1) {
    printf("Invalid input\n");
    return;
  }

  for (int i = 1; i <= height; i++) {
    for (int j = 1; j <= width; j++) {
      if (i == 1 || i == height || j == 1 || j == width) {
        printf(" *");
      } else {
        printf("  ");
      }
    }
    printf("\n");
  }
}

/* 39. printRightTriangle(int height): In ra tam giác vuông cân tại góc trái
dưới, có chiều cao height. */

void printRightTriangle(int height) {

  if (height < 1) {
    printf("Invalid input\n");
    return;
  }

  for (int i = 1; i <= height; i++) {
    for (int j = 1; j <= i; j++) {
      printf(" *");
    }
    printf("\n");
  }
}

/* 40. printPrimesInRange(int start, int end): In ra tất cả các số nguyên tố
trong đoạn [start, end] (gọi isPrime). */

void printPrimesInRange(int start, int end) {

  if (end < 1 || end < start) {
    printf("Invalid input\n");
    return;
  }

  if (start < 2) {
    start = 2;
  }

  for (int i = start; i <= end; i++) {
    if (isPrime(i)) {
      printf(" %d", i);
    }
  }
}

// 41. printDigitsReversed(int n): In ra các chữ số của n theo thứ tự ngược lại
// (ví dụ: 123 -> 3, 2, 1).

void printDigitsReversed(int n) {

  if (n < 1) {
    printf("Invalid input\n");
    return;
  }

  while (n != 0) {
    printf(" %d", n % 10);
    n = n / 10;
  }
}

// 42. analyzeNumber(int n): Hàm tổng hợp, gọi các hàm con (isEven, isPrime,
// getSumDigits) và in ra thông tin phân tích về số n.

void analyzeNumber(int n) {

  if (n < 1) {
    printf("Invalid input\n");
    return;
  }

  printf("Phan tich so %d:\n", n);

  if (isEven(n)) {
    printf(" So chan\n");
  } else {
    printf(" So le\n");
  }

  if (isPrime(n)) {
    printf(" So nguyen to\n");
  } else {
    printf(" Khong phai so nguyen to\n");
  }

  printf(" Tong cac chu so cua %d = %d", n, getSumDigits(n));
}

// 43. printDayOfWeek(int day, int month, int year): Nhập ngày tháng năm, in ra
// thứ trong tuần (sử dụng công thức Zeller hoặc một thuật toán tính thứ đơn
// giản).

void printDayOfWeek(int day, int month, int year) {

  if (day < 1 || day > 31 || month < 1 || month > 12 || year <= 0) {
    printf("Invalid input\n");
    return;
  }

  int d = day, m = month, y = year;

  switch (month) {
  case 1: {
    month = 13;
    year--;
    break;
  }

  case 2: {
    month = 14;
    year--;
    break;
  }
  }

  int f = (day + (2 * month) + 3 * (month + 1) / 5 + year + year / 4 -
           year / 100 + year / 400 + 2) %
          7;

  switch (f) {
  case 0:
    printf("%d/%d/%d: Thu Bay", d, m, y);
    break;

  case 1:
    printf("%d/%d/%d: Chu Nhat", d, m, y);
    break;

  case 2:
    printf("%d/%d/%d: Thu Hai", d, m, y);
    break;

  case 3:
    printf("%d/%d/%d: Thu Ba", d, m, y);
    break;

  case 4:
    printf("%d/%d/%d: Thu Tu", d, m, y);
    break;

  case 5:
    printf("%d/%d/%d: Thu Nam", d, m, y);
    break;

  case 6:
    printf("%d/%d/%d: Thu Sau", d, m, y);
    break;

  default:
    break;
  }
}