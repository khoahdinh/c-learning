#include <stdio.h>
#include <stdbool.h>

#include "check.cpp"   // include để test

int main()
{
    // Nhóm hàm kiểm tra   
    printf("isEven(4): %d\n", isEven(4));
    printf("isPrime(11): %d\n", isPrime(11));
    printf("isPrime(12): %d\n", isPrime(12));
    printf("isPerfectNumber(6): %d\n", isPerfectNumber(6));
    printf("isLeapYear(2024): %d\n", isLeapYear(2024));
    printf("isVowel('A'): %d\n", isVowel('A'));
    printf("isDigit('5'): %d\n", isDigit('5'));

    return 0;
}
