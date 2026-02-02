// Câu 1. Viết chương trình thực hiện các yêu cầu sau trên mảng một chiều

#include <math.h>
#include <stdio.h>

// a) Nhập mảng một chiều các số nguyên gồm n phần tử (0<n<=20)
void nhapMang(int a[], int n) {

  for (int i = 0; i < n; i++) {
    printf("a[%d]: ", i);
    scanf("%d", &a[i]);
  }
}

void xuatMang(int a[], int n) {

  printf("Mang ban dau:");
  for (int i = 0; i < n; i++) {
    printf(" %d", a[i]);
  }
  printf("\n");
}

// b) Xuất các phần tử ở vị trí chẳn của mảng.

void xuatMangViTriChan(int a[], int n) {

  printf("Phan tu o vi tri chan:");
  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {
      printf(" %d", a[i]);
    }
  }
  printf("\n");
}

// c) Xuất ra màn hình các phần tử là số chính phương nằm tại những vị trí lẻ
// trong mảng.

bool laSoChinhPhuong(int x) {
  if (x < 0)
    return false;
  int sqrtX = (int)sqrt(x);
  return sqrtX * sqrtX == x;
}

void xuatSoChinhPhuongViTriLe(int a[], int n) {

  printf("So chinh phuong vi tri le:");
  for (int i = 0; i < n; i++) {
    if (i % 2 != 0 && laSoChinhPhuong(a[i])) {
      printf(" %d", a[i]);
    }
  }
  printf("\n");
}

// d) Đếm số phần tử là số nguyên tố trong mảng.

bool laSoNguyenTo(int x) {

  if (x < 2) {
    return false;
  }

  for (int i = 2; i * i <= x; i++) {
    if (x % i == 0) {
      return false;
    }
  }

  return true;
}

int demSoNguyento(int a[], int n) {

  int dem = 0;
  for (int i = 0; i < n; i++) {
    if (laSoNguyenTo(a[i])) {
      dem++;
    }
  }
  return dem;
}

// e) Tính tổng các phần tử chẳn trong mảng.
int tongChan(int a[], int n) {

  int tong = 0;

  for (int i = 0; i < n; i++) {
    if (a[i] % 2 == 0) {
      tong = tong + a[i];
    }
  }
  return tong;
}

// f) Tìm vị trí phần tử dương cuối cùng. Xuất vị trí và giá trị của phần tử
// dương cuối cùng nếu tìm thấy.
void timViTriDuongCuoiCung(int a[], int n) {

  for (int i = n - 1; i >= 0; i--) {
    if (a[i] > 0) {
      printf("Phan tu duong cuoi cung la: %d ; Vi tri: %d\n", a[i], i);
      break;
    }
  }
}

// g) Tìm giá trị phần tử lớn nhất trong mảng.
int timMax(int a[], int n) {

  int max = a[0];
  for (int i = 1; i < n; i++) {
    if (a[i] > max) {
      max = a[i];
    }
  }
  return max;
}
// h) Xuất vị trí  phần tử lớn nhất trong mảng.

int timViTriMax(int a[], int n) {

  int viTriMax = 0;
  for (int i = 1; i < n; i++) {
    if (a[i] > a[viTriMax]) {
      viTriMax = i;
    }
  }
  return viTriMax;
}

// i) Tính trung bình cộng các phần tử trong mảng.

float tinhTrungBinhCong(int a[], int n) {

  int tong = 0, dem = 0;
  for (int i = 0; i < n; i++) {
    tong = tong + a[i];
    dem++;
  }
  return (float)tong / dem;
}

// j) Thêm một phần tử k tại vị trí index vào trong mảng,
// với k và index là số nguyên nhập từ bàn phím.

void themPhanTuViTriK(int a[], int &n, int k, int index) {

  if (index < 0 || index > n) {
    printf("Vi tri chen phan tu nam ngoai pham vi mang!\n");
    return;
  }

  // Dịch chuyển các phần tử từ vị trí index về sau sang phải
  for (int i = n; i > index; i--) {
    a[i] = a[i - 1];
  }

  // Chèn k vào vị trí index và tăng số phần ử trong mảng lên một
  a[index] = k;
  n++;
}

// k) Xóa một phần tử tại vị trí k trong mảng, với 0<=k<=n-1

void xoaPhanTuViTriK(int a[], int &n, int k) {

  if (k < 0 || k > n - 1) {
    printf("Vi tri xoa phan tu nam ngoai pham vi mang!\n");
    return;
  }

  // Dịch chuyển các phần tử từ vị trí k về sau sang trái (đè lên vị trí k)
  for (int i = k; i < n - 1; i++) {
    a[i] = a[i + 1];
  }
  // Giảm số phần tử trong mảng đi một
  n--;
}
// l) Kiểm tra mảng có chứa số lẻ không.
bool kiemTraLe(int a[], int n) {

  for (int i = 0; i < n; i++) {
    if (a[i] % 2 != 0) {
      return true;
    }
  }
  return false;
}
// m) Sắp xếp mảng theo thứ tự tăng dần.

void sapXepTangDan(int a[], int n) {

  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (a[i] > a[j]) {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }
}

int main() {

  const int MAX_SIZE = 20;

  int a[MAX_SIZE], n;

  printf("Nhap so phan tu: ");
  scanf("%d", &n);

  // Kiểm tra n nhập vào
  if (n < 1 || n > MAX_SIZE) {
    printf("So phan tu khong hop le!\n");
    return 0;
  }

  // Nhập mảng
  nhapMang(a, n);
  // Xuất mảng
  xuatMang(a, n);
  // Xuất các phần tử ở vị trí chẳn của mảng
  xuatMangViTriChan(a, n);
  // Xuất số chính phương vị trí lẻ
  xuatSoChinhPhuongViTriLe(a, n);
  // Đếm số nguyên tố
  int soNguyenTo = demSoNguyento(a, n);
  printf("So luong phan tu la so nguyen to trong mang: %d\n", soNguyenTo);
  // Tổng các phần tử chẵn chủa mảng
  int tong = tongChan(a, n);
  printf("Tong cac phan tu chan trong mang: %d\n", tong);
  // Tìm phần tử dương cuối cùng
  timViTriDuongCuoiCung(a, n);
  // Tìm phần tử lớn nhất
  int max = timMax(a, n);
  printf("Phan tu lon nhat trong mang: %d\n", max);
  // Xuất vị trí của phân tử lớn nhất
  int viTriMax = timViTriMax(a, n);
  printf("Vi tri phan tu lon nhat trong mang: %d\n", viTriMax);
  // Tính trung bình cộng
  float trungBinhCong = tinhTrungBinhCong(a, n);
  printf("Trung binh cong cac phan tu trong mang: %.2f\n", trungBinhCong);

  // Thêm một phần tử k tại vị trí index vào trong mảng
  int k, index;
  printf("Nhap gia tri k muon them vao mang: ");
  scanf("%d", &k);
  printf("Nhap vi tri (index) muon chen vao mang: ");
  scanf("%d", &index);
  themPhanTuViTriK(a, n, k, index);
  xuatMang(a, n);

  // Xóa một phần tử tại vị trí k trong mảng, với 0<=k<=n-1
  int kk;
  printf("Nhap vi tri (k) muon xoa: ");
  scanf("%d", &kk);
  xoaPhanTuViTriK(a, n, kk);
  xuatMang(a, n);

  // Kiểm tra mảng có số lẻ không??
  if (kiemTraLe(a, n)) {
    printf("Mang co chua phan tu le\n");
  } else {
    printf("Mang khong chua phan tu le\n");
  }

  // Sắp xếp tăng dần
  sapXepTangDan(a, n);
  xuatMang(a, n);

  return 0;
}
