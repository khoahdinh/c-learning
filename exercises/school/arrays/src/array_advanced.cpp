#include <stdio.h>

#include "../include/array_advanced.h"

// 38. Viết hàm xóa các phần tử bị trùng trong mảng, chỉ giữ lại phần tử xuất
// hiện đầu tiên.

void xoaPhanTuTrungNhau(int a[], int &n) {

  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (a[i] == a[j]) {
        // Dịch mảng sang trái
        for (int m = j; m < n - 1; m++) {
          a[m] = a[m + 1];
        }
        n--;
        j--; // ← Giảm j để kiểm tra lại vị trí này
      }
    }
  }
}

// 39. Viết hàm liệt kê tần suất xuất hiện của các phần tử trong mảng. (Gợi ý:
// Có thể dùng một mảng phụ để đánh dấu các phần tử đã đếm).

// Cách 1:
// void lietKeTanSuat(int a[], int n) {

//   int mangPhu[100];
//   int nPhu = n;

//   for (int i = 0; i < n; i++) {
//     mangPhu[i] = a[i];
//   }

//   xoaPhanTuTrungNhau(mangPhu, nPhu);

//   for (int i = 0; i < nPhu; i++) {
//     int dem = 0;

//     for (int j = 0; j < n; j++) {
//       if (mangPhu[i] == a[j]) {
//         dem++;
//       }
//     }

//     printf("%d xuat hien %d lan\n", mangPhu[i], dem);
//   }
// }

// Cách 2:

void lietKeTanSuat(int a[], int n) {

  bool daDem[100] = {false}; // Đánh dấu phần tử đã đếm

  for (int i = 0; i < n; i++) {
    if (daDem[i])
      continue; // Bỏ qua nếu đã đếm

    int dem = 1; // Đã có phần tử 1 tại i

    for (int j = i + 1; j < n; j++) {
      if (a[i] == a[j]) {
        dem++;
        daDem[j] = true; // Đánh dấu đã đếm
      }
    }

    printf("%d xuat hien %d lan\n", a[i], dem);
  }
}

// 40.  Viết hàm trộn hai mảng 𝑎 và 𝑏 đã được sắp xếp tăng dần thành một mảng 𝑐
// cũng được sắp xếp tăng dần.

// Giống như xếp 2 chồng bài đã sắp sẵn thành 1 chồng: 
// mỗi lần lấy lá bài trên cùng nhỏ hơn từ 1 trong 2 chồng."

void tronHaiMangDaSapXep(int a[], int n, int b[], int m, int c[], int &p) {

  int i = 0, j = 0, k = 0;

  // Trộn khi cả 2 mảng còn phần tử
  while (i < n && j < m) {
    if (a[i] < b[j]) {
      c[k] = a[i];
      i++;
    } else {
      c[k] = b[j];
      j++;
    }
    k++;
  }

  // Copy phần còn lại (nếu có)
  while (i < n) {
    c[k] = a[i];
    k++;
    i++;
  }

  while (j < m) {
    c[k] = b[j];
    k++;
    j++;
  }

  p = k; // Tổng số phần tử đã trộn
}

// 41. Viết hàm chèn cả mảng 𝑏 (gồm 𝑚 phần tử) vào mảng 𝑎 (gồm 𝑛 phần tử) tại vị
// trí 𝑘.
void chenMangBVaoMangA(int a[], int &n, int b[], int m, int k){
  
}