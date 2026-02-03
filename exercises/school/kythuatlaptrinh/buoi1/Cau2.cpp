// Câu 2. Viết chương trình thực hiện các yêu cầu sau trên mảng hai chiều:

#include <stdio.h>

#define MAX_COL 20 // Số cột tối đa của ma trận

// a) Nhập ma trận gồm d dòng, c cột.

// Hàm nhập ma trận
// Tham số a[][MAX_COL]:
//   - Dấu [] đầu tiên: số dòng KHÔNG CẦN chỉ định (compiler không cần biết có
//   bao nhiêu dòng)
//   - [MAX_COL]: số cột BẮT BUỘC phải chỉ định
//
// Tại sao không cần số dòng?
//   - Số dòng chỉ dùng để kiểm soát vòng lặp (i < d)
//   - Compiler không cần biết "tổng cộng có bao nhiêu dòng" để tính địa chỉ
//   - Chỉ cần biết "mỗi dòng dài bao nhiêu" (= MAX_COL)

void nhapMaTran(int a[][MAX_COL], int d, int c) {

  for (int i = 0; i < d; i++) {   // Duyệt qua từng dòng
    for (int j = 0; j < c; j++) { // Duyệt qua từng cột
      printf("a[%d][%d]: ", i, j);
      scanf("%d", &a[i][j]);
    }
  }
}

// b) Xuất ma trận gồm d dòng, c cột.

void xuatMaTran(int a[][MAX_COL], int d, int c) {

  printf("Ma tran %dx%d: \n", d, c);
  for (int i = 0; i < d; i++) {
    for (int j = 0; j < c; j++) {
      printf("\t%d", a[i][j]);
    }
    printf("\n");
  }
}

// c) Tính trung bình cộng các phần tử dương trong ma trận.

float tinhTrungBinhCong(int a[][MAX_COL], int d, int c) {

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

// d) Xuất các phần tử nằm trên dòng k của ma trận, với k là số nguyên nhập từ
// bàn phím.

void xuatMaTranDongK(int a[][MAX_COL], int d, int c, int k) {

  if (k < 0 || k >= d) {
    printf("Dong khong hop le!");
    return;
  }

  printf("Dong %d: \n", k);
  for (int j = 0; j < c; j++) {  // Duyệt cột
    printf("\t%d", a[k - 1][j]); // k-1 vì index từ 0
  }
  printf("\n");
}

// e) Tính tổng các phần tử nằm trên cột k của ma trận, với k là số
// nguyên nhập từ bàn phím.

int tinhTongCotK(int a[][MAX_COL], int d, int c, int kk) {

  if (kk < 0 || kk >= c) {
    printf("Cot khong hop le!");
    return 0;
  }

  int tong = 0;

  for (int i = 0; i < d; i++) { // Duyệt dòng
    tong += a[i][kk - 1];       // kk-1 vì index từ 0
  }
  return tong;
}

int main() {

  int d, c;
  int a[MAX_COL][MAX_COL];

  printf("Nhap so dong (d): ");
  scanf("%d", &d);
  printf("Nhap so cot (c): ");
  scanf("%d", &c);

  // Nhập, xuất ma trận
  nhapMaTran(a, d, c);
  xuatMaTran(a, d, c);

  // Tính trung bình cộng các phần tử dương
  float trungBinhCongDuong = tinhTrungBinhCong(a, d, c);
  printf("Trung binh cong cac phan tu duong trong mang = %.2f\n",
         trungBinhCongDuong);

  // Xuất các phần tử trên dòng k
  int k;
  printf("Nhap dong k muon xuat: ");
  scanf("%d", &k);
  xuatMaTranDongK(a, d, c, k);

  // Tinh tổng các phần tử trên trên cột kk
  int kk;
  printf("Nhap cot k muon tinh tong: ");
  scanf("%d", &kk);
  int tongCotK = tinhTongCotK(a, d, c, kk);
  printf("Tong cac phan tu tren cot %d: %d", kk, tongCotK);

  return 0;
}
