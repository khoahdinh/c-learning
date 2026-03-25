#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100

// a. Sinh ngẫu nhiên 1 ma trận vuông cấp n chứa số nguyên (n nhập từ bàn phím).

void phatSinhMaTranVuong(int a[][MAX], int &n) {

  do {
    printf("Nhap cap cua ma tran vuong (0 < n <= 100): ");
    scanf("%d", &n);
  } while (n <= 0 || n > MAX);

  srand(time(NULL));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      a[i][j] = rand() % 100 + 1;
    }
  }
}

// b. Xuất ma trận.
void xuatMaTranVuong(int a[][MAX], int n) {

  printf("Ma tran vuong %dx%d:\n", n, n);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf(" %d", a[i][j]);
    }
    printf("\n");
  }
}

// c. Liệt kê các phần tử trên đường chéo chính.
void inDuongCheoChinh(int a[][MAX], int n) {

  printf("Duong cheo Chinh:");
  for (int i = 0; i < n; i++) {
    printf(" %d", a[i][i]);
  }
  printf("\n");
}

// d. Liệt kê các phần tử trên đường chéo phụ.
void inDuongCheoPhu(int a[][MAX], int n) {

  printf("Duong cheo Phu:");
  for (int i = 0; i < n; i++) {
    printf(" %d", a[i][n - i - 1]);
  }
  printf("\n");
}

// e. Tính tổng các phần tử nằm trên dòng thứ k (k do người dùng nhập).
int tinhTongDongK(int a[][MAX], int n, int &k) {

  printf("Nhap dong ban muon tinh tong: ");
  scanf("%d", &k);

  if (k < 0 || k >= n) {
    printf("Khong ton tai dong %d!\n", k);
    return -1;
  }

  int tong = 0;

  for (int i = 0; i < n; i++) {
    tong = tong + a[k][i];
  }
  return tong;
}

// f. Tính tổng các phần tử trên mỗi dòng.
void tongTungDong(int a[][MAX], int n) {

  int tong = 0;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      tong = tong + a[i][j];
    }
    printf("Tong dong %d: %d\n", i, tong);
    tong = 0;
  }
}

// g. Xuất ra các dòng có tổng lớn nhất.
void inDongTongMax(int a[][MAX], int n) {

  int max = INT_MIN; 
  int dongMax = 0;

  for (int i = 0; i < n; i++) {
    int tong = 0;
    for (int j = 0; j < n; j++) {
      tong = tong + a[i][j];
    }

    if (tong > max) {
      max = tong;
      dongMax = i;
    }
    tong = 0;
  }
  printf("Dong %d co tong lon nhat: %d\n", dongMax, max);
}

int main() {

  int n;
  int a[MAX][MAX];

  phatSinhMaTranVuong(a, n);
  xuatMaTranVuong(a, n);

  inDuongCheoChinh(a, n);
  inDuongCheoPhu(a, n);

  // Tính tổng dòng k
  int k = 0;
  int tongDong = tinhTongDongK(a, n, k);
  if (tongDong != -1) {
    printf("Tong dong %d: %d\n", k, tongDong);
  }

  // Tính tổng từng dòng
  printf("=== Tong tung dong ===\n");
  tongTungDong(a, n);

  // In dòng có tổng lớn nhất
  inDongTongMax(a, n);

  return 0;
}
