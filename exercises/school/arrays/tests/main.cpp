/*
====================================================
CÁCH COMPILE & CHẠY CHƯƠNG TRÌNH

Bước 1: Mở terminal và đứng tại thư mục:
D:\Code_C\exercises\school\arrays>

Bước 2: Compile chương trình:
g++ src/array_io.cpp src/array_search.cpp src/array_count.cpp
src/array_modify.cpp src/array_sort.cpp src/array_advanced.cpp tests/main.cpp -o test

Bước 3: Chạy chương trình:
.\test
====================================================
*/

#include <stdio.h>

#include "../include/array_count.h"
#include "../include/array_io.h"
#include "../include/array_modify.h"
#include "../include/array_search.h"
#include "../include/array_sort.h"
#include "../include/array_advanced.h"

int main() {

  const int MAX_SIZE = 100;

  int a[MAX_SIZE], n;

  printf("Nhap so phan tu: ");
  scanf("%d", &n);

  if (n <= 0 || n >= MAX_SIZE) {
    printf("So phan tu khong hop le!\n");
    return 0;
  }

  //   Nhóm 1: Nhập, Xuất và Tính toán cơ bản

  // phatSinhMangNgauNhien(a, n);
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
  // printf("Vi tri dau tien cua X trong mang: %d\n", viTriXDauTien);

  // int viTriXCuoiCung = timViTriCuoiCung(a,n,10);
  // printf("Vi tri cuoi cung cua X trong mang: %d\n", viTriXCuoiCung);

  // int soChanDauTien = timSoChanDauTien(a,n);
  // printf("So chan dau tien trong mang: %d\n", soChanDauTien);

  // int soLeCuoiCung = timSoLeCuoiCung(a,n);
  // printf("So le cuoi cung trong mang: %d\n", soLeCuoiCung);

  // Nhóm 3: Đếm và Kiểm tra

  // int demSoLuongNguyenTo = demSoNguyenTo(a, n);
  // printf("So luong so nguyen to trong mang: %d\n", demSoLuongNguyenTo);

  // int demSoLuongHoanThien = demSoHoanThien(a, n);
  // printf("So luong so hoan thien trong mang: %d\n", demSoLuongHoanThien);

  // int demX = demSoLanXuatHien(a, n, 55);
  // printf("So lan xuat hien X trong mang: %d\n", demX);

  // if (kiemTraMangTangDan(a,n))
  // {
  //   printf("Mang tang dan\n");
  // }else{
  //   printf("Mang khong tang dan\n");
  // }

  // if (kiemTraMangDoiXung(a,n))
  // {
  //   printf("Mang doi xung\n");
  // }else
  // {
  //   printf("Mang khong doi xung\n");
  // }

  // if (kiemTraMangToanChan(a,n))
  // {
  //   printf("Mang toan chan\n");
  // }else
  // {
  //   printf("Mang khong toan chan (co so le)\n");
  // }

  // Nhóm 4: Thay đổi Mảng (Thêm, Xóa)

  // 25. Viết hàm thêm phần tử 𝑥 vào cuối mảng.
  // themPhanTuCuoi(a,n,2);
  // xuatMang(a, n);

  // 26. Viết hàm thêm phần tử 𝑥 vào đầu mảng.
  // themPhanTuDau(a,n,100);
  // xuatMang(a, n);

  // 27. Viết hàm chèn phần tử 𝑥 vào vị trí 𝑘 của mảng.
  // themPhanTuViTriK(a,n,100,3);
  // xuatMang(a, n);

  // 28. Viết hàm xóa phần tử cuối mảng.
  // xoaPhanTuCuoi(a,n);
  // xuatMang(a, n);

  // 29. Viết hàm xóa phần tử đầu mảng.
  // xoaPhanTuDau(a,n);
  // xuatMang(a, n);

  // 30. Viết hàm xóa phần tử tại vị trí 𝑘.
  // xoaPhanTuViTriK(a,n,1);
  // xuatMang(a, n);

  // 31.Viết hàm xóa tất cả các phần tử có giá trị bằng 𝑥 trong mảng.
  // xoaTatCaPhanTuX(a,n,1);
  // xuatMang(a, n);

  // Nhóm 5: Sắp xếp và Biến đổi

  // 32. Viết hàm sắp xếp mảng tăng dần (dùng Selection Sort hoặc Bubble Sort).
  // sapXepTangDan(a, n);
  // xuatMang(a, n);

  // 33. Viết hàm sắp xếp mảng giảm dần.
  // sapXepGiamDan(a, n);
  // xuatMang(a, n);

  // 34. Viết hàm đảo ngược thứ tự các phần tử trong mảng.
  // daoNguocMang(a, n);
  // xuatMang(a, n);

  // 35.  Viết hàm dịch trái xoay vòng mảng 1 đơn vị (phần tử a[0] trở thành a[n-1]).
  // dichTraiXoayVong(a, n);
  // xuatMang(a, n);

  // 36. Viết hàm thay thế tất cả các phần tử có giá trị 𝑥 bằng giá trị 𝑦.
  // thayTheXBangY(a,n,1,10);
  // xuatMang(a,n);

  // 37. Viết hàm tách mảng 𝑎 thành 2 mảng: một mảng chứa số chẵn và một mảng chứa số lẻ.
  // int mangChan[100], mangLe[100];
  // int nChan, nLe;

  // tachMangChanLe(a,n,mangChan,nChan,mangLe,nLe);
  // xuatMang(mangChan,nChan);
  // xuatMang(mangLe,nLe);

  // Nhóm 6:  Mảng một chiều nâng cao

  // 38. Viết hàm xóa các phần tử bị trùng trong mảng, chỉ giữ lại phần tử xuất
  //hiện đầu tiên.
  xoaPhanTuTrungNhau(a,n);
  xuatMang(a,n);



  return 0;
}
