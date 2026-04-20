#include <stdio.h>
#include <math.h>

// Kiểm tra số nguyên tố
int laSoNguyenTo(int n) {
  if (n < 2) return 0;
  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) return 0;
  }
  return 1;
}

// a. Đọc file, lưu vào mảng
int docFile(int a[], int &n) {
  FILE* f = fopen("input.txt", "r");
  if (f == NULL) {
    printf("Khong mo duoc file!\n");
    return 0;
  }

  fscanf(f, "%d", &n);
  for (int i = 0; i < n; i++) {
    fscanf(f, "%d", &a[i]);
  }

  fclose(f);
  return 1;
}

// b. Xuất mảng ra màn hình
void xuatMang(int a[], int n) {
  printf("Mang vua doc:\n");
  for (int i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
}

// c. Ghi các số nguyên tố vào file (ghi tiếp theo)
void ghiSoNguyenToVaoFile(int a[], int n) {
  FILE* f = fopen("input.txt", "a");  // "a" = append, ghi tiếp theo
  if (f == NULL) {
    printf("Khong mo duoc file!\n");
    return;
  }

  fprintf(f, "\nCac so nguyen to: ");
  for (int i = 0; i < n; i++) {
    if (laSoNguyenTo(a[i])) {
      fprintf(f, "%d ", a[i]);
    }
  }

  fclose(f);
  printf("Da ghi cac so nguyen to vao file!\n");
}

int main() {
  int a[100], n;

  if (docFile(a, n)) {
    xuatMang(a, n);
    ghiSoNguyenToVaoFile(a, n);
  }

  return 0;
}