#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "../include/array_io.h"

// 1. Nhập các phần tử cho mảng
void nhapMang(int a[], int n) {

  for (int i = 0; i < n; i++) {
    printf("a[%d]: ", i);
    scanf("%d", &a[i]);
  }
}

// 2. Xuất các phần tử của mảng
void xuatMang(int a[], int n) {

  printf("Mang: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
}

// 3. Phát sinh các phần tử ngẫu nhiên cho mảng
void phatSinhMangNgauNhien(int a[], int n) {

  srand(time(NULL));
  for (int i = 0; i < n; i++) {
    a[i] = rand() % 100; // 0 -> 99
  }
}

// 4. Tính tổng các phần tử trong mảng
int tinhTongMang(int a[], int n) {

  int tong = 0;
  for (int i = 0; i < n; i++) {
    tong += a[i];
  }
  return tong;
}

// 5. Tính tích các phần tử trong mảng
long long tinhTichMang(int a[], int n) {

  long long tich = 1;
  for (int i = 0; i < n; i++) {
    tich *= a[i];
  }
  return tich;
}

// 6. Tính trung bình cộng của mảng
float tinhTrungBinhCong(int a[], int n) {

  if (n == 0) {
    return 0;
  }
  return (float)tinhTongMang(a, n) / (n - 1);
}

// 7. Tính tổng các phần tử chẵn trong mảng
int tinhTongPhanTuChan(int a[], int n) {

  int tongChan = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] % 2 == 0) {
      tongChan += a[i];
    }
  }
  return tongChan;
}

// 8. Tính tổng các phần tử lẻ ở các vị trí lẻ
int tinhTongPhanTuLeViTriLe(int a[], int n) {

  int tongLe = 0;
  for (int i = 0; i < n; i++) {
    if (i % 2 != 0 && a[i] % 2 != 0) {
      tongLe += a[i];
    }
  }
  return tongLe;
}