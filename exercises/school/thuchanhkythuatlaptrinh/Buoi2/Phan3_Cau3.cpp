#include <stdio.h>
#include <string.h>

#define MAX 100

struct HangHoa {
  char mh[5];
  int sl;
  float dg;
  float st;
};

// Nhập và ghi vào file
void nhapVaGhiFile(HangHoa danhSach[], int &n) {
  do {
    printf("Nhap so luong hang hoa: ");
    scanf("%d", &n);
  } while (n <= 0 || n > MAX);

  FILE* f = fopen("DSHH.TXT", "w");
  if (f == NULL) {
    printf("Khong mo duoc file!\n");
    return;
  }

  fprintf(f, "%d\n", n);  // ghi số lượng dòng đầu

  for (int i = 0; i < n; i++) {
    printf("--- Hang hoa %d ---\n", i + 1);

    printf("Ma hang (4 ky tu): ");
    scanf("%s", danhSach[i].mh);

    printf("So luong: ");
    scanf("%d", &danhSach[i].sl);

    printf("Don gia: ");
    scanf("%f", &danhSach[i].dg);

    danhSach[i].st = danhSach[i].sl * danhSach[i].dg;  // tính số tiền

    // Ghi vào file
    fprintf(f, "%s %d %.2f %.2f\n",
            danhSach[i].mh,
            danhSach[i].sl,
            danhSach[i].dg,
            danhSach[i].st);
  }

  fclose(f);
  printf("Da ghi vao file DSHH.TXT!\n");
}

// Đọc file và in ra màn hình
void docVaXuatFile() {
  FILE* f = fopen("DSHH.TXT", "r");
  if (f == NULL) {
    printf("Khong mo duoc file!\n");
    return;
  }

  int n;
  fscanf(f, "%d", &n);

  printf("\n========================================\n");
  printf("         DANH SACH HANG HOA\n");
  printf("========================================\n");
  printf("%-6s %-10s %-12s %-12s\n", "Ma", "So luong", "Don gia", "So tien");
  printf("----------------------------------------\n");

  HangHoa hh;
  for (int i = 0; i < n; i++) {
    fscanf(f, "%s %d %f %f",
           hh.mh, &hh.sl, &hh.dg, &hh.st);

    printf("%-6s %-10d %-12.2f %-12.2f\n",
           hh.mh, hh.sl, hh.dg, hh.st);
  }

  printf("========================================\n");
  fclose(f);
}

int main() {
  int n;
  HangHoa danhSach[MAX];

  nhapVaGhiFile(danhSach, n);
  docVaXuatFile();

  return 0;
}