/*
====================================================
CÁCH COMPILE & CHẠY CHƯƠNG TRÌNH

Bước 1: Mở terminal và đứng tại thư mục:
D:\Code_C\exercises\school\arrays>

Bước 2: Compile chương trình:
g++ src/array_io.cpp tests/main.cpp -o test

Bước 3: Chạy chương trình:
.\test
====================================================
*/

#include <stdio.h>

#include "../include/array_io.h"

int main()
{
    int a[100], n;

    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("So phan tu khong hop le!\n");
        return 0;
    }

    phatSinhMangNgauNhien(a,n);
    // nhapMang(a, n);
    xuatMang(a, n);

    return 0;
}
