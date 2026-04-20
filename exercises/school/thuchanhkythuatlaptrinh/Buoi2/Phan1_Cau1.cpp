#include <stdio.h>
#include <string.h>
#define MAX 100

struct Date {
  int day;
  int month;
  int year;
};

struct SinhVien {
  char maSinhVien[11];
  char hoTen[31];
  char gioiTinh;
  Date ngaySinh;
  char lop[8];
  float diemTrungBinh;
};

// a. Nhập danh sách gồm n sinh viên
void nhapDanhSachSinhVien(SinhVien danhSachSinhVien[], int &n) {

  do {
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
  } while (n <= 0 || n > MAX);

  for (int i = 0; i < n; i++) {
    printf("--- Sinh vien %d ---\n", i + 1);

    printf("Ma sinh vien: ");
    scanf("%s", danhSachSinhVien[i].maSinhVien);

    while (getchar() != '\n')
      ;

    printf("Ho ten: ");
    fgets(danhSachSinhVien[i].hoTen, 30, stdin);
    danhSachSinhVien[i].hoTen[strcspn(danhSachSinhVien[i].hoTen, "\n")] = '\0';

    printf("Gioi tinh (x: nu, y: nam): ");
    scanf(" %c", &danhSachSinhVien[i].gioiTinh);

    printf("Ngay sinh (dd mm yyyy): ");
    scanf("%d %d %d", &danhSachSinhVien[i].ngaySinh.day,
          &danhSachSinhVien[i].ngaySinh.month,
          &danhSachSinhVien[i].ngaySinh.year);

    printf("Lop (7 ky tu): ");
    scanf("%s", danhSachSinhVien[i].lop);

    printf("Diem trung binh: ");
    scanf("%f", &danhSachSinhVien[i].diemTrungBinh);
  }
}

// b. Xuất danh sách gồm n sinh viên
void xuatDanhSachSinhVien(SinhVien danhSachSinhVien[], int n) {

  printf("\n========================================\n");
  printf("         DANH SACH SINH VIEN\n");
  printf("========================================\n");

  for (int i = 0; i < n; i++) {
    printf("\n--- Sinh vien thu %d ---\n", i + 1);

    printf("Ma sinh vien    : %s\n", danhSachSinhVien[i].maSinhVien);
    printf("Ho ten          : %s\n", danhSachSinhVien[i].hoTen);
    printf("Gioi tinh       : %s\n",
           danhSachSinhVien[i].gioiTinh == 'x' ? "Nu" : "Nam");
    printf("Ngay sinh       : %d/%d/%d\n", danhSachSinhVien[i].ngaySinh.day,
           danhSachSinhVien[i].ngaySinh.month,
           danhSachSinhVien[i].ngaySinh.year);
    printf("Lop             : %s\n", danhSachSinhVien[i].lop);
    printf("Diem trung binh : %.1f\n", danhSachSinhVien[i].diemTrungBinh);
  }
}

// c. Xuất danh sách sinh viên có điểm trung bình lớn hơn 5
void xuatDanhSachSinhVienDiemHon5(SinhVien danhSachSinhVien[], int n) {

  printf("\n========================================\n");
  printf("         DANH SACH SINH VIEN DIEM > 5\n");
  printf("========================================\n");

  for (int i = 0; i < n; i++) {
    if (danhSachSinhVien[i].diemTrungBinh > 5) {
      printf("\n--- Sinh vien thu %d ---\n", i + 1);

      printf("Ma sinh vien    : %s\n", danhSachSinhVien[i].maSinhVien);
      printf("Ho ten          : %s\n", danhSachSinhVien[i].hoTen);
      printf("Gioi tinh       : %s\n",
             danhSachSinhVien[i].gioiTinh == 'x' ? "Nu" : "Nam");
      printf("Ngay sinh       : %d/%d/%d\n", danhSachSinhVien[i].ngaySinh.day,
             danhSachSinhVien[i].ngaySinh.month,
             danhSachSinhVien[i].ngaySinh.year);
      printf("Lop             : %s\n", danhSachSinhVien[i].lop);
      printf("Diem trung binh : %.1f\n", danhSachSinhVien[i].diemTrungBinh);
    }
  }
}

// d. Xuất danh sách sinh viên thuộc ngành công nghệ thông tin
void xuatDanhSachSinhVienNganhCNTT(SinhVien danhSachSinhVien[], int n) {

  printf("\n========================================\n");
  printf("         DANH SACH SINH VIEN NGANH CNTT\n");
  printf("========================================\n");

  for (int i = 0; i < n; i++) {
    if (strstr(danhSachSinhVien[i].lop, "CNTT")) {
      printf("\n--- Sinh vien thu %d ---\n", i + 1);

      printf("Ma sinh vien    : %s\n", danhSachSinhVien[i].maSinhVien);
      printf("Ho ten          : %s\n", danhSachSinhVien[i].hoTen);
      printf("Gioi tinh       : %s\n",
             danhSachSinhVien[i].gioiTinh == 'x' ? "Nu" : "Nam");
      printf("Ngay sinh       : %d/%d/%d\n", danhSachSinhVien[i].ngaySinh.day,
             danhSachSinhVien[i].ngaySinh.month,
             danhSachSinhVien[i].ngaySinh.year);
      printf("Lop             : %s\n", danhSachSinhVien[i].lop);
      printf("Diem trung binh : %.1f\n", danhSachSinhVien[i].diemTrungBinh);
    }
  }
}

// e. Đếm số lượng sinh viên nữ
int demSinhVienNu(SinhVien danhSachSinhVien[], int n) {

  int count = 0;

  for (int i = 0; i < n; i++) {
    if (danhSachSinhVien[i].gioiTinh == 'x') {
      count++;
    }
  }

  return count;
}

// f. Xuất các sinh viên có điểm trung bình cao nhất
float timDiemMax(SinhVien danhSachSinhVien[], int n) {

  float max = danhSachSinhVien[0].diemTrungBinh;

  for (int i = 1; i < n; i++) {
    if (danhSachSinhVien[i].diemTrungBinh > max) {
      max = danhSachSinhVien[i].diemTrungBinh;
    }
  }
  return max;
}

void xuatCacSinhVienDiemCaoNhat(SinhVien danhSachSinhVien[], int n) {

  float max = timDiemMax(danhSachSinhVien, n);

  printf("\n========================================\n");
  printf("         DANH SACH SINH VIEN DIEM CAO NHAT\n");
  printf("========================================\n");

  for (int i = 0; i < n; i++) {
    if (danhSachSinhVien[i].diemTrungBinh == max) {
      printf("\n--- Sinh vien thu %d ---\n", i + 1);

      printf("Ma sinh vien    : %s\n", danhSachSinhVien[i].maSinhVien);
      printf("Ho ten          : %s\n", danhSachSinhVien[i].hoTen);
      printf("Gioi tinh       : %s\n",
             danhSachSinhVien[i].gioiTinh == 'x' ? "Nu" : "Nam");
      printf("Ngay sinh       : %d/%d/%d\n", danhSachSinhVien[i].ngaySinh.day,
             danhSachSinhVien[i].ngaySinh.month,
             danhSachSinhVien[i].ngaySinh.year);
      printf("Lop             : %s\n", danhSachSinhVien[i].lop);
      printf("Diem trung binh : %.1f\n", danhSachSinhVien[i].diemTrungBinh);
    }
  }
}

// g. Thêm 1 sinh viên vào cuối danh sách
void them1SinhVienCuoiDanhSach(SinhVien danhSachSinhVien[], int &n) {

  if (n >= MAX) {
    printf("Danh sach da day!\n");
    return;
  }

  printf("Ma sinh vien: ");
  scanf("%s", danhSachSinhVien[n].maSinhVien);

  while (getchar() != '\n')
    ;

  printf("Ho ten: ");
  fgets(danhSachSinhVien[n].hoTen, 30, stdin);
  danhSachSinhVien[n].hoTen[strcspn(danhSachSinhVien[n].hoTen, "\n")] = '\0';

  printf("Gioi tinh (x: nu, y: nam): ");
  scanf(" %c", &danhSachSinhVien[n].gioiTinh);

  printf("Ngay sinh (dd mm yyyy): ");
  scanf("%d %d %d", &danhSachSinhVien[n].ngaySinh.day,
        &danhSachSinhVien[n].ngaySinh.month,
        &danhSachSinhVien[n].ngaySinh.year);

  printf("Lop (7 ky tu): ");
  scanf("%s", danhSachSinhVien[n].lop);

  printf("Diem trung binh: ");
  scanf("%f", &danhSachSinhVien[n].diemTrungBinh);

  n++;
}

// h. Tìm sinh viên có mã là X. Nếu tìm thấy, xóa sinh viên đó khỏi danh sách.
void xoaSinhVienTheoMa(SinhVien danhSachSinhVien[], int &n) {

  char maCanXoa[20];
  printf("Nhap ma sinh vien muon xoa: ");
  scanf("%s", maCanXoa);

  int found = 0;
  for (int i = 0; i < n; i++) {
    if (strcmp(danhSachSinhVien[i].maSinhVien, maCanXoa) == 0) {
      for (int j = i; j < n - 1; j++) {
        danhSachSinhVien[j] = danhSachSinhVien[j + 1];
      }
      n--;
      found = 1;
      break;
    }
  }
  if (!found)
    printf("Khong tim thay sinh vien co ma %s!\n", maCanXoa);
}

// i. Sắp xếp danh sách tăng theo điểm trung bình
void sapXepTangTheoDiem(SinhVien danhSachSinhVien[], int n) {

  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (danhSachSinhVien[i].diemTrungBinh >
          danhSachSinhVien[j].diemTrungBinh) {
        SinhVien temp = danhSachSinhVien[i];
        danhSachSinhVien[i] = danhSachSinhVien[j];
        danhSachSinhVien[j] = temp;
      }
    }
  }
}
//

int main() {
  int n;
  struct SinhVien danhSachSinhVien[MAX];

  nhapDanhSachSinhVien(danhSachSinhVien, n);
  xuatDanhSachSinhVien(danhSachSinhVien, n);

  //   xuatDanhSachSinhVienDiemHon5(danhSachSinhVien, n);

  //   xuatDanhSachSinhVienNganhCNTT(danhSachSinhVien, n);

  //   int soLuongSinhVienNu = demSinhVienNu(danhSachSinhVien, n);
  //   if (soLuongSinhVienNu != 0) {
  //     printf("So luong sinh vien nu: %d\n", soLuongSinhVienNu);
  //   } else {
  //     printf("Khong co sinh vien nu!\n");
  //   }

  //   xuatCacSinhVienDiemCaoNhat(danhSachSinhVien, n);

  //   them1SinhVienCuoiDanhSach(danhSachSinhVien, n);
  //   xuatDanhSachSinhVien(danhSachSinhVien, n);

  xoaSinhVienTheoMa(danhSachSinhVien, n);
  xuatDanhSachSinhVien(danhSachSinhVien, n);

  sapXepTangTheoDiem(danhSachSinhVien, n);
  xuatDanhSachSinhVien(danhSachSinhVien, n);

  return 0;
}
