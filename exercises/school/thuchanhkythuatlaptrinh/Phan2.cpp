#include <stdio.h>

#define MAX 100

// a. Nhập ma trận gồm d dòng và c cột (d, c nhập từ bàn phím)

void nhapMangHaiChieu(int a[][MAX], int &d, int &c) {
  do {
    printf("Nhap so luong dong: ");
    scanf("%d", &d);
    printf("Nhap so luong cot: ");
    scanf("%d", &c);
  } while (d < 0 || d > MAX || c < 0 || c > MAX);

  for (int i = 0; i < d; i++) {
    for (int j = 0; j < c; j++) {
      printf("a[%d][%d]: ", i, j);
      scanf("%d", &a[i][j]);
    }
  }
}

// b. Xuất ma trận

void xuatMangHaiChieu(int a[][MAX], int d, int c) {

  printf("Mang 2 chieu %dx%d:\n", d, c);
  for (int i = 0; i < d; i++) {
    for (int j = 0; j < c; j++) {
      printf(" %d", a[i][j]);
    }
    printf("\n");
  }
}

// c. Tính tổng các phần tử của ma trận
int tongPhanTuMaTran(int a[][MAX], int d, int c) {

  int tong = 0;
  for (int i = 0; i < d; i++) {
    for (int j = 0; j < c; j++) {
      tong = tong + a[i][j];
    }
  }
  return tong;
}

// d. Tính trung bình cộng các phần tử trong ma trận
float trungBinhCongPhanTuMaTran(int a[][MAX], int d, int c) {
  return (float)tongPhanTuMaTran(a, d, c) / (d * c);
}

// e. Tính trung bình cộng các phần tử dương trong ma trận
float trungBinhCongPhanTuDuongMaTran(int a[][MAX], int d, int c) {

  int tong = 0, dem = 0;
  for (int i = 0; i < d; i++) {
    for (int j = 0; j < c; j++) {
      if (a[i][j] > 0) {
        tong = tong + a[i][j];
        dem++;
      }
    }
  }

  if (dem == 0) {
    printf("Khong co phan tu duong!\n");
    return 0;
  }

  return (float)tong / dem;
}

// f. Xuất các phần tử nằm trên dòng k (k do người dùng nhập) trong ma trận

void xuatDongK(int a[][MAX], int d, int c, int &k) {

  printf("Nhap dong ban muon xem: ");
  scanf("%d", &k);

  if (k < 0 || k >= d) {
    printf("Khong ton tai dong %d!\n", k);
    return;
  }

  printf("Dong %d:\n", k);

  for (int i = 0; i < c; i++) {
    printf(" %d", a[k][i]);
  }

  printf("\n");
}

// g. Tính tổng các phần tử nằm trên cột k (k do người dùng nhập) trong ma trận

int tinhTongCotK(int a[][MAX], int d, int c, int &k) {

  printf("Nhap cot ban muon tinh tong: ");
  scanf("%d", &k);

  if (k < 0 || k >= c) {
    printf("Khong ton tai cot %d!\n", k);
    return -1;
  }

  int tong = 0;

  for (int i = 0; i < d; i++) {
    tong = tong + a[i][k];
  }
  return tong;
}

// h. Tìm phần tử lớn nhất trong ma trận

int timPhanTuMax(int a[][MAX], int d, int c) {

  int max = a[0][0];
  for (int i = 0; i < d; i++) {
    for (int j = 0; j < c; j++) {
      if (a[i][j] > max) {
        max = a[i][j];
      }
    }
  }
  return max;
}

int main() {

  int d, c;
  int a[MAX][MAX];

  nhapMangHaiChieu(a, d, c);
  xuatMangHaiChieu(a, d, c);

  printf("Tong cac phan tu trong ma tran: %d\n", tongPhanTuMaTran(a, d, c));

  printf("Trung binh cong cac phan tu trong ma tran: %.2f\n",
         trungBinhCongPhanTuMaTran(a, d, c));

  printf("Trung binh cong cac phan tu duong trong ma tran: %.2f\n",
         trungBinhCongPhanTuDuongMaTran(a, d, c));

  // Xuất dòng k
  int k;
  xuatDongK(a, d, c, k);

  // Tính tổng cột k
  int tongCot = tinhTongCotK(a, d, c, k);
  if (tongCot != -1) { // dùng -1 làm mã lỗi
    printf("Tong cot %d: %d\n", k, tongCot);
  }

  // Tìm phần tử Max
  printf("Phan tu lon nhat trong ma tran: %d", timPhanTuMax(a, d, c));

  return 0;
}
