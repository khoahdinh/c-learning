#include <stdio.h>

#define MAX 100

void nhapSoLuong(int &n) {
  do {
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);
  } while (n <= 0 || n > 100);
}

// a. Nhập mảng

void nhapMang(int a[], int n) {

  for (int i = 0; i < n; i++) {
    printf("a[%d]: ", i);
    scanf("%d", &a[i]);
  }
}

// b. Xuất mảng

void xuatMang(int a[], int n) {

  printf("Mang: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
}

// c. Tìm và xuất vị trí, giá trị của phần tử dương đầu tiên

int timSoDuongDauTien(int a[], int n) {

  for (int i = 0; i < n; i++) {
    if (a[i] > 0) {
      return i;
    }
  }
  return -1;
}

// d. Tìm và xuất vị trí, giá trị của phần tử dương cuối cùng

int timSoDuongCuoiCung(int a[], int n) {

  for (int i = n - 1; i >= 0; i--) {
    if (a[i] > 0) {
      return i;
    }
  }
  return -1;
}

// e. Tìm giá trị phần tử lớn nhất

int timMax(int a[], int n) {

  int max = a[0];

  for (int i = 1; i < n; i++) {
    if (a[i] > max) {
      max = a[i];
    }
  }
  return max;
}

// f. Đếm số phần tử lớn nhất

int demMax(int a[], int n) {

  int dem = 0;
  int max = timMax(a, n);

  for (int i = 0; i < n; i++) {
    if (a[i] == max) {
      dem++;
    }
  }

  return dem;
}

// g. xuất ra vị trí của các phân tử lớn nhất

void xuatViTriMax(int a[], int n) {
  int max = timMax(a, n);

  printf("Vi tri cac phan tu lon nhat: ");
  for (int i = 0; i < n; i++) {
    if (a[i] == max) {
      printf(" %d", i);
    }
  }
}

// h. thêm 1 phần tử mới (x) vào đầu mảng

void themPhanTuDau(int a[], int &n, int x) {

  for (int i = n; i > 0; i--) {
    a[i] = a[i - 1];
  }

  a[0] = x;
  n++;
}

// i. thêm 1 phần tử mới (x) vào vị trí k trong mảng

void themPhanTuViTriK(int a[], int &n, int x, int k) {

  if (k < 0 || k > n) {
    printf("Vi tri chen phan tu nam ngoai pham vi mang!\n");
    return;
  }

  for (int i = n; i > k; i--) {
    a[i] = a[i - 1];
  }

  a[k] = x;
  n++;
}

// j. xóa phần tử đầu mảng

void xoaPhanTuDau(int a[], int &n) {

  for (int i = 0; i < n - 1; i++) {
    a[i] = a[i + 1];
  }

  n--;
}

// k. xóa phân tử tại vị trí k

void xoaPhanTuViTriK(int a[], int &n, int k) {

  if (k < 1 || k > n) {
    printf("Vi tri xoa phan tu nam ngoai pham vi mang!\n");
    return;
  }

  for (int i = k - 1; i < n - 1; i++) { // i = k - 1 để đúng với góc nhìn user
    a[i] = a[i + 1];
  }
  n--;
}

// l. Kiểm tra mảng có chứa số lẻ không??

int kiemTraMangLe(int a[], int n) {
  int flag = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] % 2 != 0) {
      flag = 1;
      break;
    }
  }
  return flag;
}

// m. Tạo mảng mới chứa các phần tử chẵn của mảng đã nhập

void tachMangChan(int a[], int n, int b[], int &m) {

  m = 0;

  for (int i = 0; i < n; i++) {
    if (a[i] % 2 == 0) {
      b[m] = a[i];
      m++;
    }
  }
}

int main() {
  int n, a[MAX];
  nhapSoLuong(n);
  nhapMang(a, n);
  xuatMang(a, n);

  int viTriDuongDau = timSoDuongDauTien(a, n);
  if (viTriDuongDau < 0) {
    printf("Khong co phan tu duong trong mang\n");
  } else {
    printf("Phan tu duong dau tien la %d vi tri %d\n", a[viTriDuongDau],
           viTriDuongDau);
  }

  printf("Gia tri lon nhat trong mang: %d\n", timMax(a, n));

  if (kiemTraMangLe(a, n) != 0) {
    printf("Mang co chua so le\n");
  } else {
    printf("Mang khong chua so le\n");
  }

  // Xóa phần tử đầu
  xoaPhanTuDau(a, n);
  printf("=== Xoa phan tu dau mang ===\n");
  xuatMang(a, n);

  // Xóa phần tử tại vị trí k
  xoaPhanTuViTriK(a, n , 2);
  printf("=== Xoa phan tu vi tri thu %d ===\n", 2);
  xuatMang(a, n);

  // Tách mảng chẵn
  int m, b[MAX];
  tachMangChan(a, n, b, m);
  printf("Xuat mang chan: ");
  xuatMang(b, m);

  return 0;
}
