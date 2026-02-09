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

void lietKeTanSuat(int a[], int n){
    
}