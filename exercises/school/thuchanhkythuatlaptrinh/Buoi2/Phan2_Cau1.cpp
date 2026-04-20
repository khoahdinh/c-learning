#include <stdio.h>
#include <stdlib.h>

// a. Nhập vào một số nguyên n (0 < n < 100)
int* nhapMang(int &n) {
  do {
    printf("Nhap n (0 < n < 100): ");
    scanf("%d", &n);
  } while (n <= 0 || n >= 100);

  int* a = (int*)malloc(n * sizeof(int));

  for (int i = 0; i < n; i++) {
    printf("a[%d]: ", i);
    scanf("%d", &a[i]);
  }

  return a;
}

// b. Xuất ra mảng số nguyên vừa nhập
void xuatMang(int* a, int n) {
  printf("Mang vua nhap: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
}

// c. Tính tổng các phần tử có trong mảng
int tinhTong(int* a, int n) {
  int tong = 0;
  for (int i = 0; i < n; i++) {
    tong += a[i];
  }
  return tong;
}

int main() {
  int n;

  int* a = nhapMang(n);
  xuatMang(a, n);
  printf("Tong cac phan tu: %d\n", tinhTong(a, n));

  free(a);  // giải phóng bộ nhớ sau khi dùng xong
  return 0;
}