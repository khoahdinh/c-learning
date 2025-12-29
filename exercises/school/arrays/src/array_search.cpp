#include <limits.h> // Thư viện chứa các hằng số giới hạn của kiểu dữ liệu (INT_MIN, INT_MAX, ...)
#include <stdio.h>

#include "../include/array_search.h"

// 9. Viết hàm tìm phần tử lớn nhất trong mảng.
int timMax(int a[], int n) {

  int max = a[0];
  for (int i = 1; i < n; i++) {
    if (a[i] > max) {
      max = a[i];
    }
  }
  return max;
}

// 10. Viết hàm tìm phần tử nhỏ nhất trong mảng.
int timMin(int a[], int n) {

  int min = a[0];
  for (int i = 1; i < n; i++) {
    if (a[i] < min) {
      min = a[i];
    }
  }
  return min;
}

// 11. Viết hàm tìm vị trí của phần tử lớn nhất.
int timViTriMax(int a[], int n) {

  int viTriMax = 0;
  for (int i = 1; i < n; i++) {
    if (a[i] > a[viTriMax]) {
      viTriMax = i;
    }
  }
  return viTriMax;
}

// 12. Viết hàm tìm vị trí của phần tử nhỏ nhất.
int timViTriMin(int a[], int n) {

  int viTriMin = 0;
  for (int i = 1; i < n; i++) {
    if (a[i] < a[viTriMin]) {
      viTriMin = i;
    }
  }
  return viTriMin;
}

// 13. Viết hàm tìm phần tử âm lớn nhất. Nếu không có, trả về 0.
int timPhanTuAmLonNhat(int a[], int n) {

  int maxAm = INT_MIN;
  // INT_MIN: giá trị nhỏ nhất có thể của kiểu int. Phải #include <limits.h>
  // Dùng làm giá trị khởi tạo để đảm bảo mọi số âm trong mảng đều lớn hơn nó

  for (int i = 0; i < n; i++) {
    if (a[i] < 0 && a[i] > maxAm) {
      maxAm = a[i];
    }
  }
  return (maxAm == INT_MIN) ? 0 : maxAm;
}

// 14. Viết hàm tìm phần tử dương nhỏ nhất. Nếu không có, trả về 0.
int timPhanTuDuongNhoNhat(int a[], int n) {

  int minPhanTuDuong = a[0];
  for (int i = 0; i < n; i++) {
    if (a[i] > 0 && a[i] <= minPhanTuDuong) {
      minPhanTuDuong = a[i];
    } else {
      return 0;
    }
  }
  return minPhanTuDuong;
}

// 15. Viết hàm tìm vị trí xuất hiện đầu tiên của phần tử 𝑥. Trả về -1 nếu không
// tìm thấy.
int timViTriDauTien(int a[], int n, int x) {

  //   for (int i = 0; i < n; i++) {
  //     if (a[i] == x) {
  //       return i;
  //     } else {
  //       return -1;
  //     }
  //   }
  return 0;
}

// 16. Viết hàm tìm vị trí xuất hiện cuối cùng của phần tử 𝑥. Trả về -1 nếu
// không tìm thấy.
int timViTriCuoiCung(int a[], int n, int x) {

  //   for (int i = n - 1; i >= 0; i--) {
  //     if (a[i] == x) {
  //       return i;
  //     } else {
  //       return -1;
  //     }
  //   }
  return 0;
}

// 17. Viết hàm tìm giá trị chẵn đầu tiên trong mảng.
int timSoChanDauTien(int a[], int n) { return 0; }

// 18. Viết hàm tìm giá trị lẻ cuối cùng trong mảng.
int timSoLeCuoiCung(int a[], int n) { return 0; }