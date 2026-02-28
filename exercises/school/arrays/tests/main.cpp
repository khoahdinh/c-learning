/*
====================================================
CÁCH COMPILE & CHẠY CHƯƠNG TRÌNH

Bước 1: Mở terminal và đứng tại thư mục:
D:\Code_C\exercises\school\arrays>

Bước 2: Compile chương trình:
g++ src/array_io.cpp src/array_search.cpp src/array_count.cpp
src/array_modify.cpp src/array_sort.cpp src/array_advanced.cpp tests/main.cpp -o
test

Bước 3: Chạy chương trình:
.\test
====================================================
*/

#include <stdio.h>

#include "../include/array_advanced.h"
#include "../include/array_count.h"
#include "../include/array_io.h"
#include "../include/array_modify.h"
#include "../include/array_search.h"
#include "../include/array_sort.h"

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

  // 4. Tính tổng các phần tử trong mảng
  // int tongMang = tinhTongMang(a, n);
  // printf("Tong = %d\n", tongMang);

  // 5. Tính tích các phần tử trong mảng
  // long long tichMang = tinhTichMang(a, n);
  // printf("Tich = %d\n", tichMang);

  // 6. Tính trung bình cộng của mảng
  // float trungBinhCong = tinhTrungBinhCong(a, n);
  // printf("Trung binh cong = %.2f\n", trungBinhCong);

  // 7. Tính tổng các phần tử chẵn trong mảng
  // int tongChan = tinhTongPhanTuChan(a, n);
  // printf("Tong chan = %d\n", tongChan);

  // 8. Tính tổng các phần tử lẻ ở các vị trí lẻ
  // int tongLeViTriLe = tinhTongPhanTuLeViTriLe(a, n);
  // printf("Tong le cua phan tu vi tri le = %d\n", tongLeViTriLe);

  // Nhóm 2: Tìm kiếm Giá trị và Vị trí

  // 9. Viết hàm tìm phần tử lớn nhất trong mảng.
  // int max = timMax(a, n);
  // printf("Phan tu lon nhat = %d\n", max);

  // 10. Viết hàm tìm phần tử nhỏ nhất trong mảng.
  // int min = timMin(a, n);
  // printf("Phan tu lon nhat = %d\n", min);

  // 11. Viết hàm tìm vị trí của phần tử lớn nhất.
  // int viTriMax = timViTriMax(a, n);
  // printf("Phan tu lon nhat = %d\n", viTriMax);

  // 12. Viết hàm tìm vị trí của phần tử nhor nhất.
  // int viTriMin = timViTriMin(a, n);
  // printf("Phan tu lon nhat = %d\n", viTriMin);

  // 13. Viết hàm tìm phần tử âm lớn nhất. Nếu không có, trả về 0.
  // int phanTuAmLonNhat = timPhanTuAmLonNhat(a,n);
  // printf("Phan tu am lon nhat = %d\n", phanTuAmLonNhat);

  // 14. Viết hàm tìm phần tử dương nhỏ nhất. Nếu không có, trả về 0.
  // int phanTuDuongNhoNhat = timPhanTuDuongNhoNhat(a,n);
  // printf("Phan tu duong nho nhat = %d\n", phanTuDuongNhoNhat);

  // 15. Viết hàm tìm vị trí xuất hiện đầu tiên của phần tử 𝑥. Trả về -1 nếu
  // không tìm thấy. 
  // int viTriXDauTien = timViTriDauTien(a,n,5); 
  // printf("Vi tri dau tien cua X trong mang: %d\n", viTriXDauTien);

  // 16. Viết hàm tìm vị trí xuất hiện cuối cùng của phần tử 𝑥. Trả về -1 nếu
  // không tìm thấy.
  // int viTriXCuoiCung = timViTriCuoiCung(a,n,10);
  // printf("Vi tri cuoi cung cua X trong mang: %d\n", viTriXCuoiCung);

  // 17. Viết hàm tìm giá trị chẵn đầu tiên trong mảng.
  // int soChanDauTien = timSoChanDauTien(a,n);
  // printf("So chan dau tien trong mang: %d\n", soChanDauTien);

  // 18. Viết hàm tìm giá trị lẻ cuối cùng trong mảng.
  // int soLeCuoiCung = timSoLeCuoiCung(a,n);
  // printf("So le cuoi cung trong mang: %d\n", soLeCuoiCung);

  // Nhóm 3: Đếm và Kiểm tra

  // 19. Viết hàm đếm số lượng số nguyên tố trong mảng.
  // int demSoLuongNguyenTo = demSoNguyenTo(a, n);
  // printf("So luong so nguyen to trong mang: %d\n", demSoLuongNguyenTo);

  // 20. Viết hàm đếm số lượng số hoàn thiện trong mảng.
  // int demSoLuongHoanThien = demSoHoanThien(a, n);
  // printf("So luong so hoan thien trong mang: %d\n", demSoLuongHoanThien);

  // 21. Viết hàm đếm số lần xuất hiện của 𝑥 trong mảng.
  // int demX = demSoLanXuatHien(a, n, 55);
  // printf("So lan xuat hien X trong mang: %d\n", demX);

  // 22. Viết hàm kiểm tra mảng có được sắp xếp tăng dần hay không.
  // if (kiemTraMangTangDan(a,n))
  // {
  //   printf("Mang tang dan\n");
  // }else{
  //   printf("Mang khong tang dan\n");
  // }

  // 23. Viết hàm kiểm tra mảng có đối xứng hay không.
  // if (kiemTraMangDoiXung(a,n))
  // {
  //   printf("Mang doi xung\n");
  // }else
  // {
  //   printf("Mang khong doi xung\n");
  // }

  // 24. Viết hàm kiểm tra mảng có toàn phần tử chẵn hay không.
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

  // 35.  Viết hàm dịch trái xoay vòng mảng 1 đơn vị (phần tử a[0] trở thành
  // a[n-1]). dichTraiXoayVong(a, n); xuatMang(a, n);

  // 36. Viết hàm thay thế tất cả các phần tử có giá trị 𝑥 bằng giá trị 𝑦.
  // thayTheXBangY(a,n,1,10);
  // xuatMang(a,n);

  // 37. Viết hàm tách mảng 𝑎 thành 2 mảng: một mảng chứa số chẵn và một mảng
  // chứa số lẻ. int mangChan[100], mangLe[100]; int nChan, nLe;

  // tachMangChanLe(a,n,mangChan,nChan,mangLe,nLe);
  // xuatMang(mangChan,nChan);
  // xuatMang(mangLe,nLe);

  // Nhóm 6:  Mảng một chiều nâng cao

  // 38. Viết hàm xóa các phần tử bị trùng trong mảng, chỉ giữ lại phần tử xuất
  // hiện đầu tiên. xoaPhanTuTrungNhau(a,n); xuatMang(a,n);

  // 39. Viết hàm liệt kê tần suất xuất hiện của các phần tử trong mảng.
  // lietKeTanSuat(a, n);

  // 40.  Viết hàm trộn hai mảng 𝑎 và 𝑏 đã được sắp xếp tăng dần thành một mảng
  // 𝑐 cũng được sắp xếp tăng dần.

  // int b[100], c[200]; int m, p;

  // printf("Nhap so phan tu mang b: ");
  // scanf("%d", &m);

  // if (m <= 0 || m >= MAX_SIZE) {
  //   printf("So phan tu khong hop le!\n");
  //   return 0;
  // }

  // nhapMang(b, m);

  // printf("Mang a: \n");
  // xuatMang(a, n);
  // printf("Mang b: \n");
  // xuatMang(b, m);

  // tronHaiMangDaSapXep(a, n, b, m, c, p);

  // printf("\nMang c sau khi tron: ");
  // xuatMang(c, p);

  // 41. Viết hàm chèn cả mảng 𝑏 (gồm 𝑚 phần tử) vào mảng 𝑎 (gồm 𝑛 phần tử) tại
  // vị trí 𝑘.

  // int b[100], m, k;

  // printf("Nhap so phan tu mang b: ");
  // scanf("%d", &m);

  // if (m <= 0 || m >= MAX_SIZE) {
  //   printf("So phan tu khong hop le!\n");
  //   return 0;
  // }

  // nhapMang(b, m);

  // printf("Nhap vi tri muon chen: ");
  // scanf("%d", &k);

  // printf("Mang a: \n");
  // xuatMang(a, n);
  // printf("Mang b: \n");
  // xuatMang(b, m);

  // chenMangBVaoMangA(a, n, b, m, k);
  // xuatMang(a, n);

  // 42.  Viết hàm tìm đoạn con (liên tiếp) tăng dài nhất trong mảng. Hàm trả về
  // độ dài của đoạn con và lưu vị trí bắt đầu 𝑘.
  // int k;
  // int doDai = timDoanConTangDaiNhat(a, n, k);

  // printf("Do dai doan con tang dai nhat: %d\n", doDai);
  // printf("Vi tri bat dau: %d\n", k);
  // printf("Doan con: ");
  // for (int i = k; i < n; i++) {
  //   printf(" %d", a[i]);
  // }

  // 43. Viết hàm tìm đoạn con (liên tiếp) có tổng lớn nhất trong mảng (sử dụng
  // thuật toán Kadane).
  // Cách 1, 2 update:
  // int start, end;
  // int maxSum1 = timDoanConTongLonNhat(a, n, start, end);
  // printf("Tong lon nhat: %d\n", maxSum1);
  // printf("Vi tri bat dau: %d\n", start);
  // printf("Vi tri ket thuc: %d\n", end);
  // printf("Doan con:");
  // for (int i = start; i <= end; i++)
  // {
  //   printf(" %d", a[i]);
  // }
  // printf("\n");
  // Cách 2:
  // int maxSum2 = timDoanConTongLonNhat(a, n);
  // printf("Tong lon nhat: %d\n", maxSum2);

  // 44. Viết hàm dịch phải xoay vòng mảng 𝑘 đơn vị.
  // dichPhaiXoayVongKDonVi(a, n, 2);
  // xuatMang(a, n);

  // 45.  Viết hàm tìm và in ra tất cả các cặp phần tử (𝑎[𝑖], 𝑎[𝑗]) trong mảng
  // có tổng bằng 𝑋 (với 𝑖 < 𝑗). 
  // timCapSoTongBangX(a, n, 10);

  // 46. Viết hàm sắp xếp mảng sao cho các số lẻ tăng dần, các số chẵn giữ
  // nguyên vị trí. 
  // sapXepSoLeTangDan(a, n); 
  // xuatMang(a, n);

  // 47. Cho mảng 𝑎 chứa 𝑛 số nguyên phân biệt trong khoảng từ 0 đến 𝑛. Viết hàm
  // tìm số duy nhất còn thiếu trong khoảng đó. (Ví dụ: mảng [0, 1, 3, 4] với 𝑛
  // = 4 thì thiếu số 2).
  int soThieu = timPhanTuConThieu(a, n);
  printf("So con thieu trong mang: %d\n", soThieu);

  return 0;
}

/*
 * ┌─────────────────────────────────┐
 * │   150 EXERCISES COMPLETED ✓     │
 * │   Blood, Sweat & Debug          │
 * │   Thanks for stopping by! 😊    │
 * └─────────────────────────────────┘
 */
