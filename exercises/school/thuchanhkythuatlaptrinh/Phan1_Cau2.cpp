#include <limits.h>
#include <math.h>
#include <stdio.h>

#define MAX 100

void nhapSoLuong(int &n) {
  do {
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);
  } while (n < 0 || n > 100);
}

// a. Nhập vào mảng A gồm n phần tử, trong quá trình nhập kiểm tra các
// phần tử nhập vào không được trùng, nếu trùng thông báo và yêu cầu nhập lại.

void nhapMang(int a[], int n) {

  int i = 0;

  while (i < n) {
    printf("a[%d]: ", i);
    scanf("%d", &a[i]);

    int trung = 0;
    for (int j = 0; j < i; j++) {
      if (a[j] == a[i]) {
        trung = 1;
        break;
      }
    }

    if (trung) {
      printf("Trung phan tu. Moi ban nhap lai!\n");
    } else {
      i++;
    }
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

// c. Xuất ra màn hình các phần tử là số chính phương nằm tại những vị trí lẻ
// trong mång.

int laSoChinhPhuong(int x) {
  if (x < 0)
    return 0;
  int temp = sqrt(x);
  return temp * temp == x;
}

void xuatSoChinhPhuongViTriLe(int a[], int n) {

  for (int i = 0; i < n; i++) {
    if (laSoChinhPhuong(a[i]) && i % 2 != 0) {
      printf(" %d", a[i]);
    }
  }
}

// d. Xuất ra vị trí của các phần tử có giá trị lớn nhất.

int timMax(int a[], int n) {

  int max = a[0];

  for (int i = 1; i < n; i++) {
    if (a[i] > max) {
      max = a[i];
    }
  }
  return max;
}

void xuatViTriMax(int a[], int n) {

  int max = timMax(a, n);

  printf("Vi tri cac phan tu lon nhat: ");
  for (int i = 0; i < n; i++) {
    if (a[i] == max) {
      printf(" %d", i);
    }
  }
}

// e. Tìm phần tử âm lớn nhất / phần tử dương nhỏ nhất

// Cách 1:
// void timPhanTuAmLonNhat(int a[], int n) {

//   int b[MAX], j = 0;

//   for (int i = 0; i < n; i++) {
//     if (a[i] < 0) {
//       b[j] = a[i];
//       j++;
//     }
//   }

//   if (j == 0) {
//     printf("Khong co phan tu am!\n");
//   }else{
//     printf(" %d", timMax(b, j)); // In phần tử âm lớn nhất
//   }
// }

// Cách 2
void timPhanTuAmLonNhat(int a[], int n) {

  int max = INT_MIN;
  int found = 0;

  for (int i = 0; i < n; i++) {
    if (a[i] < 0 && a[i] > max) {
      max = a[i];
      found = 1;
    }
  }

  if (!found) {
    printf("Khong co phan tu am!\n");
  } else {
    printf(" %d", max); // In phần tử âm lớn nhất
  }
}

// f. Tính tổng các phần tử nằm ở vị trí chẵn trong mảng.
int tongChan(int a[], int n) {

  int tong = 0;

  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {
      tong = tong + a[i];
    }
  }

  return tong;
}

// g. Viết hàm sắp xếp mảng theo thứ tự tăng dần.

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

  int n, a[MAX];
  nhapSoLuong(n);
  nhapMang(a, n);
  xuatMang(a, n);

  // Xuất số chính phương
  printf("So chinh phuong nam o vi tri le: ");
  xuatSoChinhPhuongViTriLe(a, n);
  printf("\n");

  // Tìm phần tử âm lớn nhất
  printf("Phan tu am lon nhat: ");
  timPhanTuAmLonNhat(a, n);
  printf("\n");

  // Tính tổng phần tử vị trí chẵn
  printf("Tong cac phan tu o vi tri chan: %d\n", tongChan(a, n));

  //Sắp xếp mảng
  printf("=== MANG SAU KHI SAP XEP ===\n");
  sapXepTangDan(a, n);
  xuatMang(a, n);

  return 0;
}
