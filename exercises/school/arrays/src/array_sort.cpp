#include <stdio.h>

#include "../include/array_sort.h"

// 32. Viết hàm sắp xếp mảng tăng dần (dùng Selection Sort hoặc Bubble Sort).
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

// 33. Viết hàm sắp xếp mảng giảm dần.
void sapXepGiamDan(int a[], int n) {

  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (a[i] < a[j]) {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }
}

// 34. Viết hàm đảo ngược thứ tự các phần tử trong mảng.
void daoNguocMang(int a[], int n) {

  for (int i = 0; i < n / 2; i++) {
    int temp = a[i];
    a[i] = a[n - i - 1];
    a[n - i - 1] = temp;
  }
}

// 35.  Viết hàm dịch trái xoay vòng mảng 1 đơn vị (phần tử a[0] trở thành
// a[n-1]).
void dichTraiXoayVong(int a[], int n) {

  int temp = a[0];

  for (int i = 0; i < n; i++) {

    if (i == n - 1) {
      a[i] = temp;
    } else {
      a[i] = a[i + 1];
    }
  }
}

// 36. Viết hàm thay thế tất cả các phần tử có giá trị 𝑥 bằng giá trị 𝑦.
void thayTheXBangY(int a[], int n, int x, int y) {

  for (int i = 0; i < n; i++) {
    if (a[i] == x) {
      a[i] = y;
    }
  }
}

// 37. Viết hàm tách mảng 𝑎 thành 2 mảng: một mảng chứa số chẵn và một mảng chứa
// số lẻ.
void tachMangChanLe(int a[], int n, int mangChan[], int &nChan, int mangLe[],
                    int &nLe) {

  int viTriChan = 0, viTriLe = 0;

  for (int i = 0; i < n; i++) {
    if (a[i] % 2 == 0) {
      mangChan[viTriChan] = a[i];
      viTriChan++;
    } else {
      mangLe[viTriLe] = a[i];
      viTriLe++;
    }
  }
  nChan = viTriChan;
  nLe = viTriLe;
}