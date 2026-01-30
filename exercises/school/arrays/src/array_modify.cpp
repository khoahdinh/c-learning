#include <stdio.h>

#include "../include/array_modify.h"

// 25. Viết hàm thêm phần tử 𝑥 vào cuối mảng.
void themPhanTuCuoi(int a[], int &n, int x) {

  a[n] = x;
  n++;
}

// 26. Viết hàm thêm phần tử 𝑥 vào đầu mảng.
void themPhanTuDau(int a[], int &n, int x) {

  // Dịch chuyển các phần tử sang phải 1 vị trí
  for (int i = n; i > 0; i--) {
    a[i] = a[i - 1];
  }

  a[0] = x;
  n++;
}

// 27. Viết hàm chèn phần tử 𝑥 vào vị trí 𝑘 của mảng.
void themPhanTuViTriK(int a[], int &n, int x, int k) {

  if (k < 0 || k > n) {
    printf("Vi tri chen phan tu nam ngoai pham vi mang!\n");
    return;
  }

  // Dịch chuyển các phần tử từ vị trí k về sau sang phải
  for (int i = n; i > k; i--) {
    a[i] = a[i - 1];
  }

  // Chèn x vào vị trí k
  a[k] = x;
  n++;
}

// 28. Viết hàm xóa phần tử cuối mảng.
void xoaPhanTuCuoi(int a[], int &n){

  n--;
}


// 29. Viết hàm xóa phần tử đầu mảng.
void xoaPhanTuDau(int a[], int &n){


  for (int  i = 0; i < n - 1; i++)
  {
    a[i] = a[i + 1];
  }

  n--;
  
}

// 30. Viết hàm xóa phần tử tại vị trí 𝑘.
void xoaPhanTuViTriK(int a[], int &n, int k){

    if (k < 1 || k > n) {
    printf("Vi tri xoa phan tu nam ngoai pham vi mang!\n");
    return;
  }

  // Dịch chuyển các phần tử từ vị trí k về sau sang trái
  for (int i = k - 1; i < n - 1; i++) { // i = k - 1 để đúng với góc nhìn user 
    a[i] = a[i + 1];
  }
  n--;

}

// 31.Viết hàm xóa tất cả các phần tử có giá trị bằng 𝑥 trong mảng.
// void xoaTatCaPhanTuX(int a[], int &n, int x){

//   int temp[100];
//   int j = 0, soLuongPhanTu = 0;

//   for (int i = 0; i < n; i++)
//   {
//     if (a[i] != x)
//     {
//       temp[j] = a[i];
//       j++;
//       soLuongPhanTu++;
//     }
//   }

//   for (int i = 0; i < soLuongPhanTu; i++)
//   {
//     a[i] = temp[i];
//   }

//   n = soLuongPhanTu;
  
// }

void xoaTatCaPhanTuX(int a[], int &n, int x){

  int viTriGhi = 0;

  for (int i = 0; i < n; i++)
  {
    if (a[i] != x)
    {
      a[viTriGhi] = a[i];
      viTriGhi++;
    }
  }

  n = viTriGhi;

}