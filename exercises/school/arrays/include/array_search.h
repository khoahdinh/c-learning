#ifndef ARRAY_SEARCH_H
#define ARRAY_SEARCH_H

// ================================
// Nhóm 2: Tìm kiếm Giá trị và Vị trí
// Mảng một chiều
// ================================

// 9. Viết hàm tìm phần tử lớn nhất trong mảng.
int timMax(int a[], int n);

// 10. Viết hàm tìm phần tử nhỏ nhất trong mảng.
int timMin(int a[], int n);

// 11. Viết hàm tìm vị trí của phần tử lớn nhất.
int timViTriMax(int a[], int n);

// 12. Viết hàm tìm vị trí của phần tử nhỏ nhất.
int timViTriMin(int a[], int n);

// 13. Viết hàm tìm phần tử âm lớn nhất. Nếu không có, trả về 0.
int timPhanTuAmLonNhat(int a[], int n);

// 14. Viết hàm tìm phần tử dương nhỏ nhất. Nếu không có, trả về 0.
int timPhanTuDuongNhoNhat(int a[], int n);

// 15. Viết hàm tìm vị trí xuất hiện đầu tiên của phần tử 𝑥. Trả về -1 nếu không tìm thấy.
int timViTriDauTien(int a[], int n, int x);

// 16. Viết hàm tìm vị trí xuất hiện cuối cùng của phần tử 𝑥. Trả về -1 nếu không tìm thấy.
int timViTriCuoiCung(int a[], int n, int x);

// 17. Viết hàm tìm giá trị chẵn đầu tiên trong mảng.
int timSoChanDauTien(int a[], int n);

// 18. Viết hàm tìm giá trị lẻ cuối cùng trong mảng.
int timSoLeCuoiCung(int a[], int n);

#endif