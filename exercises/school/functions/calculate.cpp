#include <cctype>
#include <math.h>
#include <stdio.h>

#include "calculate.h"
#include "check.h"

#define PI 3.141592653589793

// 13. getMax(int a, int b): Trả về số lớn nhất trong hai số a, b.

int getMax(int a, int b) { return (a > b) ? a : b; }

// 14. getMin(int a, int b): Trả về số nhỏ nhất trong hai số a, b.

int getMin(int a, int b) { return (a > b) ? b : a; }

// 15. getMax3(int a, int b, int c): Trả về số lớn nhất trong ba số (có thể gọi
// lại hàm getMax).

int getMax3(int a, int b, int c) { return getMax(getMax(a, b), c); }

// 16. calculateFactorial(int n): Trả về $N!$ (N giai thừa).

long long calculateFactorial(int n) {

  if (n < 0) {
    return 0;
  }

  long long Factorial = 1;
  for (int i = 1; i <= n; i++) {
    Factorial *= i;
  }

  return Factorial;
}

// 17. calculateSum(int n): Trả về tổng $S = 1 + 2 + ... + N$.

int calculateSum(int n) {

  if (n < 1) {
    return 0;
  }

  return (n * (n + 1)) / 2;
}

/* 18. getGCD(int a, int b): Trả về Ước chung lớn nhất (UCLN) của a và b bằng
thuật toán Euclid.*/

int getGCD(int a, int b) {

  if (a < 1 || b < 1) {
    return 0;
  }

  while (b != 0) {
    int r = a % b; // r = số dư
    a = b;
    b = r;
  }

  return a;
}

/* 19. getLCM(int a, int b): Trả về Bội chung nhỏ nhất (BCNN) của a và b (sử
dụng getGCD).*/

int getLCM(int a, int b) { return a * b / (getGCD(a, b)); }

// 20. power(int base, int exp): Trả về $base^{exp}$ (tính bằng vòng lặp). -
// phép lũy thừa

long power(int base, int exp) {

  long power = 1;

  for (int i = 1; i <= exp; i++) {
    power *= base;
  }

  return power;
}

// 21. getDigitCount(int n): Trả về số lượng chữ số của số nguyên n.

int getDigitCount(int n) {

  if (n < 1) {
    return 0;
  }

  int count = 0;

  while (n != 0) {
    n = n / 10;
    count++;
  }
  return count;
}

// 22. getSumDigits(int n): Trả về tổng các chữ số của số nguyên n.

int getSumDigits(int n) {

  if (n < 1) {
    return 0;
  }

  int sum = 0;

  while (n != 0) {
    sum += n % 10;
    n = n / 10;
  }
  return sum;
}

// 23. reverseNumber(int n): Trả về số đảo ngược của n.

int reverseNumber(int n) {

  if (n < 1) {
    return 0;
  }

  int reverse = 0;

  while (n != 0) {
    int digit = n % 10;
    reverse = reverse * 10 + digit;
    n = n / 10;
  }
  return reverse;
}

// 24. getFirstDigit(int n): Trả về chữ số đầu tiên của số nguyên n.

int getFirstDigit(int n) {

  if (n < 1) {
    return 0;
  }

  int digit = 0;

  while (n != 0) {
    digit = n % 10;
    n = n / 10;
  }
  return digit;
}

/* 25. getNthFibonacci(int n): Trả về số Fibonacci thứ n (sử dụng vòng lặp,
không đệ quy).*/

int getNthFibonacci(int n) {

  if (n < 1)
    return 0;

  if (n == 1)
    return 1;

  if (n == 2)
    return 1;

  // First two Fibonacci numbers
  int first = 0;
  int second = 1;

  /*Nên gán giá trị vì debug biến next sẽ nhận 1 số ngẫu nhiên mặc dù không ảnh
    đến chương trình nhưng nó khó chịu*/
  int next = 0; 

  for (int i = 3; i <= n; i++) {
    next = first + second;
    // Update values for next iteration
    first = second;
    second = next;
  }
  return next;
}

// 26. getDaysInMonth(int month, int year): Trả về số ngày trong month của năm
// year (sử dụng isLeapYear).

int getDaysInMonth(const int month, const int year) {

  // Check case year = 0
  if (year == 0) {
    return 0;
  }

  switch (month) {
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12:
    return 31;

  case 4:
  case 6:
  case 9:
  case 11:
    return 30;

  case 2:
    return (isLeapYear(year)) ? 29 : 28;

  default:
    return 0;
  }
}

/* 27. calculateRectangleArea(float length, float width): Trả về diện tích hình
 chữ nhật. */

float calculateRectangleArea(float length, float width) {

  if (length <= 0 || width <= 0) {
    return 0;
  }

  return length * width;
}

/* 28. calculateTriangleArea(float a, float b, float c): Trả về diện tích tam
giác theo công thức Heron (sau khi đã kiểm tra isValidTriangle). */

float calculateTriangleArea(float a, float b, float c) {

  if (isValidTriangle(a, b, c)) {
    float p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
  } else {
    return 0;
  }
}

// 29. calculateCirclePerimeter(float radius): Trả về chu vi hình tròn.

float calculateCirclePerimeter(float radius) {

  if (radius < 0) {
    return 0;
  }

  return 2 * PI * radius;
}

// 30. convertCtoF(float celsius): Trả về nhiệt độ F tương ứng từ độ C.

float convertCtoF(float celsius) { return celsius * 1.8 + 32; }

// 31. convertFtoC(float fahrenheit): Trả về nhiệt độ C tương ứng từ độ F.

float convertFtoC(float fahrenheit) { return (fahrenheit - 32) / 1.8; }

/* 32. calculateTaxiFare(float km): Trả về tiền cước taxi dựa trên số km (tự
định nghĩa 3 mức giá). */

float calculateTaxiFare(float km) {

  if (km < 0) {
    return 0;
  }

  if (km <= 1) {
    return km * 15000;
  } else if (km <= 5) {
    return 15000 + (km - 1) * 13500;
  } else {
    return 15000 + 4 * 13500 + (km - 5) * 10000;
  }
}

// 33. calculateSeriesSum(int n): Trả về tổng S = 1 + 1/2 + 1/3 + ... + 1/N.

float calculateSeriesSum(int n) {
  if (n < 0) {
    return 0;
  }

  if (n == 1) {
    return 1;
  }

  float sum = 1;

  for (int i = 2; i <= n; i++) {
    sum = sum + (float)1 / i;
  }

  return sum;
}