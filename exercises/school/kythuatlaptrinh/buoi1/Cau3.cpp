// Câu 3. Kiểu dữ liệu Struct
// Định nghĩa kiểu cấu trúc NGAYTHANG bao gồm 3 thuộc tính: ngày, tháng, năm.
// Dựa trên kiểu cấu trúc đã có, tiếp tục định nghĩa kiểu cấu trúc SINHVIEN bao
// gồm các thuộc tính:
// - Mã sinh viên: tối đa 10 kí tự
// - Họ tên: tối đa 30 kí tự
// - Ngày tháng năm sinh.
// - Giới tính
// - Điểm trung bình

#include <stdio.h>
#include <string.h>

struct NGAYTHANG {
  int ngay;
  int thang;
  int nam;
};

struct SINHVIEN {
  char maSinhVien[11]; // 10 ký tự + 1 ký tự '\0'
  char hoTen[31];      // 30 ký tự + 1 ký tự '\0'
  struct NGAYTHANG ngaySinh;
  char gioiTinh;
  float diemTrungBinh;
};

// a) Nhập danh sách gồm n sinh viên với n là số nguyên nhập từ bàn phím,
// 0<n<=100.
void nhapDanhSachSinhVien(struct SINHVIEN danhSachSinhVien[], int n) {

  if (n < 0 || n > 100) {
    printf("So luong sinh vien khong hop le!");
    return;
  }

  for (int i = 0; i < n; i++) {
    printf("\n=== Nhap thong tin sinh vien thu %d ===\n", i + 1);

    // Nhập mã sinh viên
    printf("Nhap ma sinh vien: ");
    scanf("%s", danhSachSinhVien[i].maSinhVien);

    // Xóa bộ đệm (buffer) trước khi nhập chuỗi có khoảng trắng
    while (getchar() != '\n')
      ;

    // Nhập họ tên
    printf("Nhap ho ten: ");
    fgets(danhSachSinhVien[i].hoTen, 31, stdin);

    // Xóa ký tự '\n' ở cuối chuỗi do fgets đọc vào
    danhSachSinhVien[i].hoTen[strcspn(danhSachSinhVien[i].hoTen, "\n")] = '\0';

    // Nhập ngày sinh
    printf("Nhap ngay sinh (dd mm yyyy): ");
    scanf("%d %d %d", &danhSachSinhVien[i].ngaySinh.ngay,
          &danhSachSinhVien[i].ngaySinh.thang,
          &danhSachSinhVien[i].ngaySinh.nam);

    // Xóa buffer
    while (getchar() != '\n')
      ;

    // Nhập giới tính
    printf("Nhap gioi tinh (M/F): ");
    scanf("%c", &danhSachSinhVien[i].gioiTinh);

    // Nhập điểm trung bình
    printf("Nhap diem trung binh: ");
    scanf("%f", &danhSachSinhVien[i].diemTrungBinh);
  }
}

// b) Xuất danh sách sinh viên.
void xuatDanhSachSinhVien(struct SINHVIEN danhSachSinhVien[], int n) {

  printf("\n========================================\n");
  printf("         DANH SACH SINH VIEN\n");
  printf("========================================\n");

  for (int i = 0; i < n; i++) {
    printf("\n--- Sinh vien thu %d ---\n", i + 1);

    printf("Ma sinh vien    : %s\n", danhSachSinhVien[i].maSinhVien);
    printf("Ho ten          : %s\n", danhSachSinhVien[i].hoTen);
    printf("Ngay sinh       : %d/%d/%d\n", danhSachSinhVien[i].ngaySinh.ngay,
           danhSachSinhVien[i].ngaySinh.thang,
           danhSachSinhVien[i].ngaySinh.nam);
    printf("Gioi tinh       : %s\n",
           danhSachSinhVien[i].gioiTinh == 'M' ? "Nam" : "Nu");
    printf("Diem trung binh : %.1f\n", danhSachSinhVien[i].diemTrungBinh);
  }

  printf("\n========================================\n");
}

// c) Sắp xếp danh sách sinh viên tăng dần theo điểm trung bình.

void sapXepSinhVienTangDan(struct SINHVIEN danhSachSinhVien[], int n) {

  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (danhSachSinhVien[i].diemTrungBinh >
          danhSachSinhVien[j].diemTrungBinh) {
        struct SINHVIEN temp = danhSachSinhVien[i];
        danhSachSinhVien[i] = danhSachSinhVien[j];
        danhSachSinhVien[j] = temp;
      }
    }
  }
}

// d) Cho biết sinh viên có điểm trung bình cao nhất khóa.

void sinhVienDiemCaoNhat(struct SINHVIEN danhSachSinhVien[], int n) {

  float max = danhSachSinhVien[0].diemTrungBinh;

  // Tìm điểm cao nhất
  for (int i = 1; i < n; i++) {
    if (danhSachSinhVien[i].diemTrungBinh > max) {
      max = danhSachSinhVien[i].diemTrungBinh;
    }
  }

  // In ra tất cả sinh viên có điểm = max
  printf("\n=== SINH VIEN CO DIEM CAO NHAT (%.2f) ===\n", max);

  for (int i = 0; i < n; i++) {
    if (danhSachSinhVien[i].diemTrungBinh == max) {

      printf("Ma sinh vien    : %s\n", danhSachSinhVien[i].maSinhVien);
      printf("Ho ten          : %s\n", danhSachSinhVien[i].hoTen);
      printf("Ngay sinh       : %d/%d/%d\n", danhSachSinhVien[i].ngaySinh.ngay,
             danhSachSinhVien[i].ngaySinh.thang,
             danhSachSinhVien[i].ngaySinh.nam);
      printf("Gioi tinh       : %s\n",
             danhSachSinhVien[i].gioiTinh == 'M' ? "Nam" : "Nu");
      printf("Diem trung binh : %.1f\n", danhSachSinhVien[i].diemTrungBinh);
    }
  }
}

// e) Tìm sinh viên có mã số x trong danh sách. Nếu không có sinh viên mang mã
// số x, in ra thông báo “Khong co sinh vien nay trong danh sach”, ngược lại in
// ra đầy đủ thông tin của sinh viên có mã số x.

void timSinhVienMaSoX(struct SINHVIEN danhSachSinhVien[], int n, char x[]) {

  bool timRa = false;
  for (int i = 0; i < n; i++) {
    if (strcmp(danhSachSinhVien[i].maSinhVien, x) == 0) {
      timRa = true;

      printf("\n=== THONG TIN SINH VIEN ===\n");
      printf("Ma sinh vien    : %s\n", danhSachSinhVien[i].maSinhVien);
      printf("Ho ten          : %s\n", danhSachSinhVien[i].hoTen);
      printf("Ngay sinh       : %d/%d/%d\n", danhSachSinhVien[i].ngaySinh.ngay,
             danhSachSinhVien[i].ngaySinh.thang,
             danhSachSinhVien[i].ngaySinh.nam);
      printf("Gioi tinh       : %s\n",
             danhSachSinhVien[i].gioiTinh == 'M' ? "Nam" : "Nu");
      printf("Diem trung binh : %.1f\n", danhSachSinhVien[i].diemTrungBinh);
      break;
    }
  }
  if (!timRa) {
    printf("Khong tim ra sinh vien co ma so: %s\n", x);
  }
}

int main() {
  int n;
  struct SINHVIEN danhSachSinhVien[100];

  printf("Nhap so luong sinh vien muon nhap: ");
  scanf("%d", &n);

  nhapDanhSachSinhVien(danhSachSinhVien, n);
  xuatDanhSachSinhVien(danhSachSinhVien, n);

  // Sắp xếp theo điểm
  //   sapXepSinhVienTangDan(danhSachSinhVien, n);

  // Xuất danh sách sau khi sắp xếp
  //   printf("\n=== Danh sach sau khi sap xep ===\n");
  //   xuatDanhSachSinhVien(danhSachSinhVien, n);

  // Xuất sinh viên có điểm cao nhất
  sinhVienDiemCaoNhat(danhSachSinhVien, n);

  // Tìm sinh viên có mã số x
  char x[11];
  printf("Nhap ma so sinh vien muon tim: ");
  scanf("%s", x);
  timSinhVienMaSoX(danhSachSinhVien, n, x);

  return 0;
}
