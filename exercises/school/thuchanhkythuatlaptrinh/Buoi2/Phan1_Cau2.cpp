#include <stdio.h>
#include <string.h>
#define MAX 100

struct Date {
  int day;
  int month;
  int year;
};

struct BuuKien {
  char maBuuKien[10];
  char tenNguoiGui[30];
  char tenNguoiNhan[30];
  float trongLuong;
  Date ngayGui;
  char noiDung[50];
  float donGia;
};

// a. Nhập thông tin các bưu kiện
void nhapDanhSachBuuKien(BuuKien danhSach[], int &n) {
  do {
    printf("Nhap so luong buu kien: ");
    scanf("%d", &n);
  } while (n <= 0 || n > MAX);

  for (int i = 0; i < n; i++) {
    printf("--- Buu kien %d ---\n", i + 1);

    printf("Ma buu kien: ");
    scanf("%s", danhSach[i].maBuuKien);

    while (getchar() != '\n');

    printf("Ten nguoi gui: ");
    fgets(danhSach[i].tenNguoiGui, 30, stdin);
    danhSach[i].tenNguoiGui[strcspn(danhSach[i].tenNguoiGui, "\n")] = '\0';

    printf("Ten nguoi nhan: ");
    fgets(danhSach[i].tenNguoiNhan, 30, stdin);
    danhSach[i].tenNguoiNhan[strcspn(danhSach[i].tenNguoiNhan, "\n")] = '\0';

    printf("Trong luong (kg): ");
    scanf("%f", &danhSach[i].trongLuong);

    printf("Ngay gui (dd mm yyyy): ");
    scanf("%d %d %d", &danhSach[i].ngayGui.day,
          &danhSach[i].ngayGui.month,
          &danhSach[i].ngayGui.year);

    while (getchar() != '\n');

    printf("Noi dung buu kien: ");
    fgets(danhSach[i].noiDung, 50, stdin);
    danhSach[i].noiDung[strcspn(danhSach[i].noiDung, "\n")] = '\0';

    printf("Don gia gui (VND/kg): ");
    scanf("%f", &danhSach[i].donGia);
  }
}

// b. Xuất thông tin các bưu kiện
void xuatDanhSachBuuKien(BuuKien danhSach[], int n) {
  printf("\n========================================\n");
  printf("         DANH SACH BUU KIEN\n");
  printf("========================================\n");

  for (int i = 0; i < n; i++) {
    printf("\n--- Buu kien thu %d ---\n", i + 1);
    printf("Ma buu kien   : %s\n", danhSach[i].maBuuKien);
    printf("Nguoi gui     : %s\n", danhSach[i].tenNguoiGui);
    printf("Nguoi nhan    : %s\n", danhSach[i].tenNguoiNhan);
    printf("Trong luong   : %.2f kg\n", danhSach[i].trongLuong);
    printf("Ngay gui      : %d/%d/%d\n", danhSach[i].ngayGui.day,
           danhSach[i].ngayGui.month, danhSach[i].ngayGui.year);
    printf("Noi dung      : %s\n", danhSach[i].noiDung);
    printf("Don gia       : %.2f VND/kg\n", danhSach[i].donGia);
  }
}

// c. Thêm một bưu kiện vào danh sách
void themBuuKien(BuuKien danhSach[], int &n) {
  if (n >= MAX) {
    printf("Danh sach da day!\n");
    return;
  }

  printf("--- Nhap buu kien moi ---\n");

  printf("Ma buu kien: ");
  scanf("%s", danhSach[n].maBuuKien);

  while (getchar() != '\n');

  printf("Ten nguoi gui: ");
  fgets(danhSach[n].tenNguoiGui, 30, stdin);
  danhSach[n].tenNguoiGui[strcspn(danhSach[n].tenNguoiGui, "\n")] = '\0';

  printf("Ten nguoi nhan: ");
  fgets(danhSach[n].tenNguoiNhan, 30, stdin);
  danhSach[n].tenNguoiNhan[strcspn(danhSach[n].tenNguoiNhan, "\n")] = '\0';

  printf("Trong luong (kg): ");
  scanf("%f", &danhSach[n].trongLuong);

  printf("Ngay gui (dd mm yyyy): ");
  scanf("%d %d %d", &danhSach[n].ngayGui.day,
        &danhSach[n].ngayGui.month,
        &danhSach[n].ngayGui.year);

  while (getchar() != '\n');

  printf("Noi dung buu kien: ");
  fgets(danhSach[n].noiDung, 50, stdin);
  danhSach[n].noiDung[strcspn(danhSach[n].noiDung, "\n")] = '\0';

  printf("Don gia gui (VND/kg): ");
  scanf("%f", &danhSach[n].donGia);

  n++;
  printf("Them buu kien thanh cong!\n");
}

// d. Sắp xếp danh sách theo mã bưu kiện
void sapXepTheoMa(BuuKien danhSach[], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (strcmp(danhSach[i].maBuuKien, danhSach[j].maBuuKien) > 0) {
        BuuKien temp = danhSach[i];
        danhSach[i] = danhSach[j];
        danhSach[j] = temp;
      }
    }
  }
}

// e. Tính giá trị của mỗi bưu kiện (tri = trong luong * don gia)
void tinhVaXuatGiaTri(BuuKien danhSach[], int n) {
  printf("\n========================================\n");
  printf("         GIA TRI CAC BUU KIEN\n");
  printf("========================================\n");

  for (int i = 0; i < n; i++) {
    float giaTri = danhSach[i].trongLuong * danhSach[i].donGia;
    printf("Ma: %s | Nguoi gui: %s | Gia tri: %.2f VND\n",
           danhSach[i].maBuuKien, danhSach[i].tenNguoiGui, giaTri);
  }
}

// f. Đếm số lượng bưu kiện có trọng lượng lớn nhất
void demBuuKienTrongLuongLonNhat(BuuKien danhSach[], int n) {
  float max = danhSach[0].trongLuong;
  for (int i = 1; i < n; i++) {
    if (danhSach[i].trongLuong > max)
      max = danhSach[i].trongLuong;
  }

  int count = 0;
  for (int i = 0; i < n; i++) {
    if (danhSach[i].trongLuong - max > -0.001f &&
        danhSach[i].trongLuong - max < 0.001f)
      count++;
  }

  printf("Trong luong lon nhat: %.2f kg\n", max);
  printf("So luong buu kien co trong luong lon nhat: %d\n", count);
}

// g. Tìm bưu kiện theo tên người gửi
void timBuuKienTheoNguoiGui(BuuKien danhSach[], int n) {
  char tenCanTim[30];

  while (getchar() != '\n');
  printf("Nhap ten nguoi gui can tim: ");
  fgets(tenCanTim, 30, stdin);
  tenCanTim[strcspn(tenCanTim, "\n")] = '\0';

  int found = 0;
  for (int i = 0; i < n; i++) {
    if (strcmp(danhSach[i].tenNguoiGui, tenCanTim) == 0) {
      printf("\n--- Buu kien tim thay ---\n");
      printf("Ma buu kien   : %s\n", danhSach[i].maBuuKien);
      printf("Nguoi gui     : %s\n", danhSach[i].tenNguoiGui);
      printf("Nguoi nhan    : %s\n", danhSach[i].tenNguoiNhan);
      printf("Trong luong   : %.2f kg\n", danhSach[i].trongLuong);
      printf("Ngay gui      : %d/%d/%d\n", danhSach[i].ngayGui.day,
             danhSach[i].ngayGui.month, danhSach[i].ngayGui.year);
      printf("Noi dung      : %s\n", danhSach[i].noiDung);
      printf("Don gia       : %.2f VND/kg\n", danhSach[i].donGia);
      found = 1;
    }
  }

  if (!found)
    printf("Khong tim thay buu kien cua nguoi gui: %s\n", tenCanTim);
}

// h. Xuất các bưu kiện gửi vào tháng 04/2014
void xuatBuuKienThang4Nam2014(BuuKien danhSach[], int n) {
  printf("\n========================================\n");
  printf("   BUU KIEN GUI THANG 04/2014\n");
  printf("========================================\n");

  int found = 0;
  for (int i = 0; i < n; i++) {
    if (danhSach[i].ngayGui.month == 4 && danhSach[i].ngayGui.year == 2014) {
      printf("\n--- Buu kien ---\n");
      printf("Ma buu kien   : %s\n", danhSach[i].maBuuKien);
      printf("Nguoi gui     : %s\n", danhSach[i].tenNguoiGui);
      printf("Nguoi nhan    : %s\n", danhSach[i].tenNguoiNhan);
      printf("Trong luong   : %.2f kg\n", danhSach[i].trongLuong);
      printf("Ngay gui      : %d/%d/%d\n", danhSach[i].ngayGui.day,
             danhSach[i].ngayGui.month, danhSach[i].ngayGui.year);
      printf("Noi dung      : %s\n", danhSach[i].noiDung);
      printf("Don gia       : %.2f VND/kg\n", danhSach[i].donGia);
      found = 1;
    }
  }

  if (!found)
    printf("Khong co buu kien nao gui vao thang 04/2014!\n");
}

int main() {
  int n;
  BuuKien danhSach[MAX];

  nhapDanhSachBuuKien(danhSach, n);
  xuatDanhSachBuuKien(danhSach, n);

  themBuuKien(danhSach, n);
  xuatDanhSachBuuKien(danhSach, n);

  sapXepTheoMa(danhSach, n);
  printf("\nDanh sach sau khi sap xep theo ma:\n");
  xuatDanhSachBuuKien(danhSach, n);

  tinhVaXuatGiaTri(danhSach, n);

  demBuuKienTrongLuongLonNhat(danhSach, n);

  timBuuKienTheoNguoiGui(danhSach, n);

  xuatBuuKienThang4Nam2014(danhSach, n);

  return 0;
}