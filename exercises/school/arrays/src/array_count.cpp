#include <stdio.h>

#include "../include/array_count.h"

// Hàm kiểm tra số nguyên tố
bool laSoNguyenTo(int x) {

  if (x < 2) {
    return false;
  }

  for (int i = 2; i * i <= x; i++) {
    if (x % i == 0) {
      return false;
    }
  }

  return true;
}

// Hàm kiểm tra số hoàn thiện
bool laSoHoanThien(int x) {

  if (x <= 1)
    return false;

  int sum = 0;

  for (int i = 1; i <= x / 2; i++) {
    if (x % i == 0) {
      sum += i;
    }
  }

  return x == sum;
}

// 19. Viết hàm đếm số lượng số nguyên tố trong mảng.
int demSoNguyenTo(int a[], int n) {

  int count = 0;

  for (int i = 0; i < n; i++) {
    if (laSoNguyenTo(a[i])) {
      count++;
    }
  }

  return count;
}

// 20. Viết hàm đếm số lượng số hoàn thiện trong mảng.
int demSoHoanThien(int a[], int n) {

  int count = 0;

  for (int i = 0; i < n; i++) {
    if (laSoHoanThien(a[i])) {
      count++;
    }
  }

  return count;
}

// 21. Viết hàm đếm số lần xuất hiện của 𝑥 trong mảng.
int demSoLanXuatHien(int a[], int n, int x) {

  int count = 0;

  for (int i = 0; i < n; i++) {
    if (a[i] == x) {
      count++;
    }
  }

  return count;
}

// 22. Viết hàm kiểm tra mảng có được sắp xếp tăng dần hay không.
int kiemTraMangTangDan(int a[], int n) {

  if (n <= 1) {
    return 1;
  }

  // Trả về 1 nếu tăng dần, 0 nếu không
  for (int i = 0; i < n - 1; i++) {
    if (a[i] >= a[i + 1]) {
      return 0;
    }
  }

  return 1;
}

// 23. Viết hàm kiểm tra mảng có đối xứng hay không.
int kiemTraMangDoiXung(int a[], int n) {
  // Trả về 1 nếu đối xứng, 0 nếu không
  for (int i = 0; i < n / 2; i++) {
    if (a[i] != a[n - 1 - i]) {
      return 0;
    }
  }
  return 1;
}

// 24. Viết hàm kiểm tra mảng có toàn phần tử chẵn hay không.
int kiemTraMangToanChan(int a[], int n) {
  // Trả về 1 nếu toàn chẵn, 0 nếu không
  for (int i = 0; i < n; i++) {
    if (a[i] % 2 != 0) {
      return 0;
    }
  }

  return 1;
}