#ifndef ARRAY_MODIFY_H
#define ARRAY_MODIFY_H

// ================================
// Nhóm 4: Thay đổi Mảng (Thêm, Xóa)
// Mảng một chiều
// ================================

// 25. Viết hàm thêm phần tử 𝑥 vào cuối mảng.
void themPhanTuCuoi(int a[], int &n, int x);

// 26. Viết hàm thêm phần tử 𝑥 vào đầu mảng.
void themPhanTuDau(int a[], int &n, int x);

// 27. Viết hàm chèn phần tử 𝑥 vào vị trí 𝑘 của mảng.
void themPhanTuViTriK(int a[], int &n, int x, int k);

// 28. Viết hàm xóa phần tử cuối mảng.
void xoaPhanTuCuoi(int a[], int &n);

// 29. Viết hàm xóa phần tử đầu mảng.
void xoaPhanTuDau(int a[], int &n);

// 30. Viết hàm xóa phần tử tại vị trí 𝑘.
void xoaPhanTuViTriK(int a[], int &n, int k);

// 31.Viết hàm xóa tất cả các phần tử có giá trị bằng 𝑥 trong mảng.
void xoaTatCaPhanTuX(int a[], int &n, int x);


#endif