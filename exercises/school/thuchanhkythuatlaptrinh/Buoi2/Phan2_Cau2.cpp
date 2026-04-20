#include <stdio.h>
#include <stdlib.h>

// a. Nhập ma trận m dòng, n cột
int** nhapMaTran(int &m, int &n) {
  do {
    printf("Nhap so dong m (0 < m <= 100): ");
    scanf("%d", &m);
    printf("Nhap so cot n (0 < n <= 100): ");
    scanf("%d", &n);
  } while (m <= 0 || m > 100 || n <= 0 || n > 100);

  // Cấp phát động
  int** a = (int**)malloc(m * sizeof(int*));
  for (int i = 0; i < m; i++) {
    a[i] = (int*)malloc(n * sizeof(int));
  }

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      printf("a[%d][%d]: ", i, j);
      scanf("%d", &a[i][j]);
    }
  }

  return a;
}

// b. Xuất ma trận
void xuatMaTran(int** a, int m, int n) {
  printf("\nMa tran vua nhap (%dx%d):\n", m, n);
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      printf("%5d", a[i][j]);
    }
    printf("\n");
  }
}

// c. Tính tổng các phần tử trong ma trận
int tinhTong(int** a, int m, int n) {
  int tong = 0;
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      tong += a[i][j];
    }
  }
  return tong;
}

// Giải phóng bộ nhớ
void freeMaTran(int** a, int m) {
  for (int i = 0; i < m; i++) {
    free(a[i]);
  }
  free(a);
}

int main() {
  int m, n;

  int** a = nhapMaTran(m, n);
  xuatMaTran(a, m, n);
  printf("Tong cac phan tu trong ma tran: %d\n", tinhTong(a, m, n));

  freeMaTran(a, m);
  return 0;
}