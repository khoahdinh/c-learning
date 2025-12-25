/*
Run code: g++ main.cpp check.cpp calculate.cpp print.cpp modify.cpp -o main ; if
($?) {.\main }
*/

#include <stdbool.h>
#include <stdio.h>

// include để test
#include "calculate.h"
#include "check.h"
#include "modify.h"
#include "print.h"

int main() {
  // ===== Nhóm hàm kiểm tra =====
  printf("\nHAM KIEM TRA:\n");
  //   printf("isEven(4): %d\n", isEven(4));
  //   printf("isPrime(11): %d\n", isPrime(11));
  //   printf("isPrime(12): %d\n", isPrime(12));
  //   printf("isPerfectNumber(6): %d\n", isPerfectNumber(6));
  //   printf("isPalindrome(121): %d\n", isPalindrome(121));
  //   printf("isLeapYear(2024): %d\n", isLeapYear(2024));
  //   printf("isVowel('A'): %d\n", isVowel('A'));
  //   printf("isDigit('5'): %d\n", isDigit('5'));

  printf("\n------\n");

  // ===== Nhóm hàm tính toán =====
  printf("\nHAM TINH TOAN:\n");

  //   printf("getMax(5, 9): %d\n", getMax(5, 9));
  //   printf("getMin(5, 9): %d\n", getMin(5, 9));
  //   printf("getMax3(3, 7, 5): %d\n", getMax3(3, 7, 5));

  //   printf("calculateFactorial(5): %ld\n", calculateFactorial(5));
  //   printf("calculateSum(10): %d\n", calculateSum(10));

  //   printf("getGCD(24, 36): %d\n", getGCD(24, 36));
  //   printf("getLCM(6, 8): %d\n", getLCM(6, 8));

  //   printf("power(2, 5): %ld\n", power(2, 5));

  //   printf("getDigitCount(12345): %d\n", getDigitCount(12345));
  //   printf("getSumDigits(12345): %d\n", getSumDigits(12345));
  //   printf("reverseNumber(1234): %d\n", reverseNumber(1234));
  //   printf("getFirstDigit(9876): %d\n", getFirstDigit(9876));

  //   printf("getNthFibonacci(10): %d\n", getNthFibonacci(10));

  //   printf("getDaysInMonth(2, 2024): %d\n", getDaysInMonth(2, 2024));

  //   printf("calculateRectangleArea(4, 5): %.2f\n", calculateRectangleArea(4,
  //   5));

  //   printf("calculateTriangleArea(3, 4, 5): %.2f\n",
  //          calculateTriangleArea(3, 4, 5));

  //   printf("calculateCirclePerimeter(3): %.2f\n",
  //   calculateCirclePerimeter(3));

  //   printf("convertCtoF(25): %.2f\n", convertCtoF(25));
  //   printf("convertFtoC(77): %.2f\n", convertFtoC(77));

  //   printf("calculateTaxiFare(7.5): %.0f\n", calculateTaxiFare(7.5));

  //   printf("calculateSeriesSum(5): %.4f\n", calculateSeriesSum(5));

  printf("\n------\n");

  // ===== Nhóm hàm thủ tục =====
  printf("\nHAM THU TUC:\n");
  // printMenu();
  // printMultiplicationTable(2);
  // printAllMultiplicationTables();
  // printSquare(4);
  // printHollowRectangle(4,5);
  // printRightTriangle(4);
  // printPrimesInRange(-1,16);
  // printDigitsReversed(1234);
  // analyzeNumber(12);
  // printDayOfWeek(25,12,2025);

  // ===== Nhóm hàm thủ tục =====
  printf("\nHAM VOI THAM SO CON TRO:\n");

  // Swap a và b - int
  int a = 5, b = 10;
  printf("a: %d , b: %d\n", a, b);
  swapInt(a, b);
  printf("a: %d , b: %d\n", a, b);

  // Swap a và b - float
  float c = 6.0f, d = 12.0f;
  printf("c: %.1f , d: %.1f\n", c, d);
  swapFloat(c, d);
  printf("c: %.1f , d: %.1f\n", c, d);

  // Tăng 1 đơn vị
  int e = 1;
  printf("So hien tai: %d\n", e);
  increment(e);
  printf("So sau khi tang: %d\n", e);

  // Sắp xếp 2 số, sao cho sau khi gọi hàm, a luôn nhỏ hơn hoặc bằng b
  int f = 10, g = 5;
  printf("So hien tai: %d %d\n", f, g);
  orderTwo(f, g);
  printf("So sau khi sap: %d %d\n", f, g);

  //  Sắp xếp 3 số nguyên theo thứ tự tăng dần
  int h = 6, i = 10, k = 3;
  printf("So hien tai: %d %d %d\n", h, i, k);
  sortThree(h, i, k);
  printf("So sau khi sap: %d %d %d\n", h, i, k);

  // Giải phương trình bậc 2
  int l = 1, m = 0, n = -1, numRoots = 0;
  float x1 = 0, x2 = 0;
  printf("Giai phuong trinh bac 2: a = %d, b = %d, c = %d\n", l, m, n);
  getRoots(l, m, n, x1, x2, numRoots);
  printf("x1: %.1f ; x2: %.1f ; numRoots: %d\n", x1, x2, numRoots);

  // Phân tích tổng số giây (totalSeconds) thành số giờ (h), số phút (m) và số
  // giây (s).
  int totalSeconds = 3661, gio = 0, phut = 0, giay = 0;
  printf("So giay can doi: %ds\n", totalSeconds);
  decomposeTime(totalSeconds, gio, phut, giay);
  printf("Sau khi doi: %dh:%dm:%ds\n", gio, phut, giay);

  return 0;
}
