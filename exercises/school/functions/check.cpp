/*
    File: check.cpp
    Mô tả:
    - Cài đặt (định nghĩa) các hàm kiểm tra đã khai báo trong check.h
*/
#include <cctype>
#include <math.h>
#include <stdio.h>

#include "check.h"

// 1. isEven(int n): Kiểm tra n có phải là số chẵn không.

bool isEven(int n) { return n % 2 == 0; }

// 2. isOdd(int n): Kiểm tra n có phải là số lẻ không.

bool isOdd(int n) { return n % 2 != 0; }

// 3. isPositive(int n): Kiểm tra n có phải là số dương không.

bool isPositive(int n) { return n > 0; }

// 4. isPrime(int n): Kiểm tra n có phải là số nguyên tố không.

bool isPrime(int n) {

  if (n < 2)
    return false;

  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      // Dừng khi tìm ra ước
      return false;
    }
  }

  return true;
}

// 5. isSquareNumber(int n): Kiểm tra n có phải là số chính phương không.

bool isSquareNumber(int n) {

  if (n < 0)
    return false;

  int x = sqrt(n);

  return x * x == n;
}

// 6. isPerfectNumber(int n): Kiểm tra n có phải là số hoàn hảo không.

bool isPerfectNumber(int n) {

  int sum = 1;

  if (n <= 1)
    return false;

  for (int i = 2; i <= (n / 2); i++) {
    if (n % i == 0) {
      sum = sum + i;
    }
  }

  return n == sum;
}

// 7. isLeapYear(int year): Kiểm tra year có phải là năm nhuận không.

bool isLeapYear(int year) {

  return (year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0));
}

/* 9. isDivisible(int number, int divisor): Kiểm tra number có chia hết cho
divisor không.*/

bool isDivisible(int number, int divisor) {
    
  if (divisor == 0) {
    return 0;
  }

  return number % divisor == 0;
}

/*10. isValidTriangle(float a, float b, float c): Kiểm tra xem 3 cạnh a, b, c có
thể tạo thành một tam giác hợp lệ không.*/

bool isValidTriangle(float a, float b, float c) {

  return a > 0 && b > 0 && c > 0 && 
        a + b > c && 
        a + c > b && 
        b + c > a;
}

/* 11. isVowel(char c): Kiểm tra ký tự c có phải là một nguyên âm (a, e, i, o,
u) hay không.*/

bool isVowel(char c) {

  c = tolower(c);
  return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

// 12. isDigit(char c): Kiểm tra ký tự c có phải là một chữ số (0-9) hay không.

bool isDigit(char c) { return c >= '0' && c <= '9'; }
