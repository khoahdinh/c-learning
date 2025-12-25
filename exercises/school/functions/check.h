#ifndef CHECK_H
#define CHECK_H

/*
    File: check.h
    Mô tả:
    - Chứa khai báo (prototype) các hàm kiểm tra.
    - Các hàm này trả về kiểu bool.
    - Được sử dụng chung cho nhiều file khác (main.cpp, calculate.cpp, ...).
*/

/* ===== Nhóm hàm kiểm tra ===== */

// 1. Kiểm tra số chẵn
bool isEven(int n);

// 2. Kiểm tra số lẻ
bool isOdd(int n);

// 3. Kiểm tra số dương
bool isPositive(int n);

// 4. Kiểm tra số nguyên tố
bool isPrime(int n);

// 5. Kiểm tra số chính phương
bool isSquareNumber(int n);

// 6. Kiểm tra số hoàn hảo
bool isPerfectNumber(int n);

// 7. Kiểm tra năm nhuận
bool isLeapYear(int year);

// 8. Kiểm tra số đối xứng
bool isPalindrome(int n);

// 9. Kiểm tra chia hết
bool isDivisible(int number, int divisor);

// 10. Kiểm tra tam giác hợp lệ
bool isValidTriangle(float a, float b, float c);

// 11. Kiểm tra nguyên âm
bool isVowel(char c);

// 12. Kiểm tra chữ số
bool isDigit(char c);

#endif
