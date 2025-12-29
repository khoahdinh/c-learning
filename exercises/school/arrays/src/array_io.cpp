#include <stdio.h>

// 1. Nhập các phần tử cho mảng
void nhapMang(int a[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("Nhap phan tu thu %d cho mang: ", i+1);
        scanf("%d", &a[i]);
    }
    
};

// // 2. Xuất các phần tử của mảng
// void xuatMang(int a[], int n);

// // 3. Phát sinh các phần tử ngẫu nhiên cho mảng
// void phatSinhMangNgauNhien(int a[], int n);

// // 4. Tính tổng các phần tử trong mảng
// int tinhTongMang(int a[], int n);

// // 5. Tính tích các phần tử trong mảng
// long long tinhTichMang(int a[], int n);

// // 6. Tính trung bình cộng của mảng
// float tinhTrungBinhCong(int a[], int n);

// // 7. Tính tổng các phần tử chẵn trong mảng
// int tinhTongPhanTuChan(int a[], int n);

// // 8. Tính tổng các phần tử lẻ ở các vị trí lẻ
// int tinhTongPhanTuLeViTriLe(int a[], int n);