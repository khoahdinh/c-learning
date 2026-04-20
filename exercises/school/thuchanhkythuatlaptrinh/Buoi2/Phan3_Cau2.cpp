#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DONG 5
#define COT  6

// Ghi ma trận ngẫu nhiên vào file
void phatSinhVaGhiFile(int a[DONG][COT]) {
  srand(time(NULL));

  for (int i = 0; i < DONG; i++)
    for (int j = 0; j < COT; j++)
      a[i][j] = rand() % 100 + 1;

  FILE* f = fopen("test.inp", "w");
  if (f == NULL) {
    printf("Khong mo duoc file!\n");
    return;
  }

  fprintf(f, "%d %d\n", DONG, COT);  // dòng đầu: d c
  for (int i = 0; i < DONG; i++) {
    for (int j = 0; j < COT; j++) {
      fprintf(f, "%d ", a[i][j]);
    }
    fprintf(f, "\n");
  }

  fclose(f);
  printf("Da ghi ma tran vao file test.inp!\n");
}

// Đọc file vào ma trận b
int docFile(int b[DONG][COT], int &d, int &c) {
  FILE* f = fopen("test.inp", "r");
  if (f == NULL) {
    printf("Khong mo duoc file!\n");
    return 0;
  }

  fscanf(f, "%d %d", &d, &c);
  for (int i = 0; i < d; i++)
    for (int j = 0; j < c; j++)
      fscanf(f, "%d", &b[i][j]);

  fclose(f);
  return 1;
}

// Xuất ma trận ra màn hình
void xuatMaTran(int a[DONG][COT], int d, int c, const char* ten) {
  printf("\n%s (%dx%d):\n", ten, d, c);
  for (int i = 0; i < d; i++) {
    for (int j = 0; j < c; j++) {
      printf("%5d", a[i][j]);
    }
    printf("\n");
  }
}

int main() {
  int a[DONG][COT], b[DONG][COT];
  int d, c;

  // Phát sinh và ghi vào file
  phatSinhVaGhiFile(a);
  xuatMaTran(a, DONG, COT, "Ma tran A (vua phat sinh)");

  // Đọc lại từ file vào ma trận b
  if (docFile(b, d, c)) {
    xuatMaTran(b, d, c, "Ma tran B (doc tu file)");

    // Kiểm tra A == B
    int giong = 1;
    for (int i = 0; i < d; i++)
      for (int j = 0; j < c; j++)
        if (a[i][j] != b[i][j]) { giong = 0; break; }

    printf("\nKet qua luu file: %s\n", giong ? "DUNG!" : "SAI!");
  }

  return 0;
}