/*
====================================================
CÁCH COMPILE & CHẠY CHƯƠNG TRÌNH

Bước 1: Mở terminal và đứng tại thư mục:
D:\Code_C\exercises\school\arrays>

Bước 2: Compile chương trình:
g++ src/array_io.cpp src/array_search.cpp tests/main.cpp -o test

Bước 3: Chạy chương trình:
.\test
====================================================
*/

#include <stdio.h>

#include "../include/array_io.h"
#include "../include/array_search.h"

int main() {
  int a[100], n;

  printf("Nhap so phan tu: ");
  scanf("%d", &n);

  if (n <= 0 || n > 100) {
    printf("So phan tu khong hop le!\n");
    return 0;
  }

//   Nhóm 1: Nhập, Xuất và Tính toán cơ bản

//   phatSinhMangNgauNhien(a, n);
  nhapMang(a, n);
  xuatMang(a, n);

//   int tongMang = tinhTongMang(a, n);
//   printf("Tong = %d\n", tongMang);

//   long long tichMang = tinhTichMang(a, n);
//   printf("Tich = %d\n", tichMang);

//   float trungBinhCong = tinhTrungBinhCong(a, n);
//   printf("Trung binh cong = %.2f\n", trungBinhCong);

//   int tongChan = tinhTongPhanTuChan(a, n);
//   printf("Tong chan = %d\n", tongChan);

//   int tongLeViTriLe = tinhTongPhanTuLeViTriLe(a, n);
//   printf("Tong le cua phan tu vi tri le = %d\n", tongLeViTriLe);

// Nhóm 2: Tìm kiếm Giá trị và Vị trí

    // int phanTuAmLonNhat = timPhanTuAmLonNhat(a,n);
    // printf("Phan tu am lon nhat = %d\n", phanTuAmLonNhat);

    // int phanTuDuongNhoNhat = timPhanTuDuongNhoNhat(a,n);
    // printf("Phan tu duong nho nhat = %d\n", phanTuDuongNhoNhat);

    // int viTriXDauTien = timViTriDauTien(a,n,5);
    // printf("Vi tri dau tien cua X trong mang: = %d\n", viTriXDauTien);

    // int viTriXCuoiCung = timViTriCuoiCung(a,n,10);
    // printf("Vi tri cuoi cung cua X trong mang: = %d\n", viTriXCuoiCung);

    // int soChanDauTien = timSoChanDauTien(a,n);
    // printf("So chan dau tien trong mang: = %d\n", soChanDauTien);

    // int soLeCuoiCung = timSoLeCuoiCung(a,n);
    // printf("So le cuoi cung trong mang: = %d\n", soLeCuoiCung);


  return 0;
}
