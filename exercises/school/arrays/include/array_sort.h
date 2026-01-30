#ifndef ARRAY_SORT_H
#define ARRAY_SORT_H

// ================================
// Nhóm 5: Sắp xếp và Biến đổi
// Mảng một chiều
// ================================

// 32. Viết hàm sắp xếp mảng tăng dần (dùng Selection Sort hoặc Bubble Sort).
void sapXepTangDan(int a[], int n);

// 33. Viết hàm sắp xếp mảng giảm dần.
void sapXepGiamDan(int a[], int n);

// 34. Viết hàm đảo ngược thứ tự các phần tử trong mảng.
void daoNguocMang(int a[], int n);

// 35.  Viết hàm dịch trái xoay vòng mảng 1 đơn vị (phần tử a[0] trở thành a[n-1]).
void dichTraiXoayVong(int a[], int n);

// 36. Viết hàm thay thế tất cả các phần tử có giá trị 𝑥 bằng giá trị 𝑦.
void thayTheXBangY(int a[], int n, int x, int y);

// 37. Viết hàm tách mảng 𝑎 thành 2 mảng: một mảng chứa số chẵn và một mảng chứa số lẻ.
void tachMangChanLe(int a[], int n, int mangChan[], int &nChan, int mangLe[], int &nLe);

#endif