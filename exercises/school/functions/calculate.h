#ifndef CALCULATE_H
#define CALCULATE_H

// 13. Max – Min
int getMax(int a, int b);
int getMin(int a, int b);
int getMax3(int a, int b, int c);

// 16 – 17. Giai thừa & tổng
long long calculateFactorial(int n);
int calculateSum(int n);

// 18 – 19. GCD & LCM
int getGCD(int a, int b);
int getLCM(int a, int b);

// 20. Lũy thừa
long power(int base, int exp);

// 21 – 24. Xử lý chữ số
int getDigitCount(int n);
int getSumDigits(int n);
int reverseNumber(int n);
int getFirstDigit(int n);

// 25. Fibonacci
int getNthFibonacci(int n);

// 26. Ngày trong tháng
int getDaysInMonth(int month, int year);

// 27 – 29. Hình học
float calculateRectangleArea(float length, float width);
float calculateTriangleArea(float a, float b, float c);
float calculateCirclePerimeter(float radius);

// 30 – 31. Đổi nhiệt độ
float convertCtoF(float celsius);
float convertFtoC(float fahrenheit);

// 32. Taxi
float calculateTaxiFare(float km);

// 33. Chuỗi tổng
float calculateSeriesSum(int n);

#endif
