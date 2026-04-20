#include <stdio.h>
#include <stdlib.h>

struct PhanSo {
  int tu;
  int mau;
};

// Tìm UCLN để rút gọn
int ucln(int a, int b) {
  if (a < 0) a = -a;
  if (b < 0) b = -b;
  while (b != 0) {
    int temp = b;
    b = a % b;
    a = temp;
  }
  return a;
}

// a. Nhập một phân số
PhanSo* nhapPhanSo() {
  PhanSo* ps = (PhanSo*)malloc(sizeof(PhanSo));

  printf("Nhap tu so: ");
  scanf("%d", &ps->tu);

  do {
    printf("Nhap mau so (khac 0): ");
    scanf("%d", &ps->mau);
  } while (ps->mau == 0);

  // Rút gọn
  int u = ucln(ps->tu, ps->mau);
  ps->tu /= u;
  ps->mau /= u;

  if (ps->mau < 0) {
    ps->tu = -ps->tu;
    ps->mau = -ps->mau;
  }

  return ps;
}

// b. Nhập dãy n phân số
PhanSo* nhapDayPhanSo(int &n) {
  do {
    printf("Nhap so luong phan so (n > 0): ");
    scanf("%d", &n);
  } while (n <= 0);

  PhanSo* day = (PhanSo*)malloc(n * sizeof(PhanSo));

  for (int i = 0; i < n; i++) {
    printf("--- Phan so thu %d ---\n", i + 1);
    printf("Nhap tu so: ");
    scanf("%d", &day[i].tu);

    do {
      printf("Nhap mau so (khac 0): ");
      scanf("%d", &day[i].mau);
    } while (day[i].mau == 0);

    // Rút gọn
    int u = ucln(day[i].tu, day[i].mau);
    day[i].tu /= u;
    day[i].mau /= u;

    if (day[i].mau < 0) {
      day[i].tu = -day[i].tu;
      day[i].mau = -day[i].mau;
    }
  }

  return day;
}

// c. Xuất một phân số
void xuatPhanSo(PhanSo* ps) {
  if (ps->mau == 1)
    printf("%d", ps->tu);        
  else
    printf("%d/%d", ps->tu, ps->mau);
}

// d. Xuất dãy n phân số
void xuatDayPhanSo(PhanSo* day, int n) {
  printf("Day phan so: ");
  for (int i = 0; i < n; i++) {
    xuatPhanSo(&day[i]);
    if (i < n - 1) printf(", ");
  }
  printf("\n");
}

// e. Tìm phân số lớn nhất trong dãy
// So sánh: tu1/mau1 > tu2/mau2 <=> tu1*mau2 > tu2*mau1
PhanSo* timPhanSoLonNhat(PhanSo* day, int n) {
  int maxIdx = 0;
  for (int i = 1; i < n; i++) {
    if (day[i].tu * day[maxIdx].mau > day[maxIdx].tu * day[i].mau) {
      maxIdx = i;
    }
  }
  return &day[maxIdx];
}

// f. Tính tổng các phân số trong dãy
// a/b + c/d = (a*d + c*b) / (b*d)
PhanSo tinhTongDayPhanSo(PhanSo* day, int n) {
  PhanSo tong;
  tong.tu = day[0].tu;
  tong.mau = day[0].mau;

  for (int i = 1; i < n; i++) {
    tong.tu = tong.tu * day[i].mau + day[i].tu * tong.mau;
    tong.mau = tong.mau * day[i].mau;

    int u = ucln(tong.tu, tong.mau);
    tong.tu /= u;
    tong.mau /= u;
  }

  // Chuẩn hóa dấu
  if (tong.mau < 0) {
    tong.tu = -tong.tu;
    tong.mau = -tong.mau;
  }

  return tong;
}

int main() {
  int n;

  // Test nhập/xuất 1 phân số
  printf("=== Nhap 1 phan so ===\n");
  PhanSo* ps = nhapPhanSo();
  printf("Phan so vua nhap: ");
  xuatPhanSo(ps);
  printf("\n");
  free(ps);

  // Test dãy phân số
  printf("\n=== Nhap day phan so ===\n");
  PhanSo* day = nhapDayPhanSo(n);
  xuatDayPhanSo(day, n);

  printf("Phan so lon nhat: ");
  xuatPhanSo(timPhanSoLonNhat(day, n));
  printf("\n");

  PhanSo tong = tinhTongDayPhanSo(day, n);
  printf("Tong cac phan so: ");
  xuatPhanSo(&tong);
  printf("\n");

  free(day);
  return 0;
}