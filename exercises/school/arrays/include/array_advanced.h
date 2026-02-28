#ifndef ARRAY_ADVANCED_H
#define ARRAY_ADVANCED_H

// ================================
// Nhóm 6:  Mảng một chiều nâng cao
// ================================

// 38. Viết hàm xóa các phần tử bị trùng trong mảng, chỉ giữ lại phần tử xuất
// hiện đầu tiên.
void xoaPhanTuTrungNhau(int a[], int &n);

// 39. Viết hàm liệt kê tần suất xuất hiện của các phần tử trong mảng. (Gợi ý:
// Có thể dùng một mảng phụ để đánh dấu các phần tử đã đếm).
void lietKeTanSuat(int a[], int n);

// 40.  Viết hàm trộn hai mảng 𝑎 và 𝑏 đã được sắp xếp tăng dần thành một mảng 𝑐
// cũng được sắp xếp tăng dần.
void tronHaiMangDaSapXep(int a[], int n, int b[], int m, int c[], int &p);

// 41. Viết hàm chèn cả mảng 𝑏 (gồm 𝑚 phần tử) vào mảng 𝑎 (gồm 𝑛 phần tử) tại vị
// trí 𝑘.
void chenMangBVaoMangA(int a[], int &n, int b[], int m, int k);

// 42.  Viết hàm tìm đoạn con (liên tiếp) tăng dài nhất trong mảng. Hàm trả về
// độ dài của đoạn con và lưu vị trí bắt đầu 𝑘.
int timDoanConTangDaiNhat(int a[], int n, int &k);

// 43. Viết hàm tìm đoạn con (liên tiếp) có tổng lớn nhất trong mảng (sử dụng
// thuật toán Kadane).
int timDoanConTongLonNhat(int a[], int n);
int timDoanConTongLonNhat(int a[], int n, int &start, int &end);

// 44. Viết hàm dịch phải xoay vòng mảng 𝑘 đơn vị.
void dichPhaiXoayVongKDonVi(int a[], int n, int k);

// 45.  Viết hàm tìm và in ra tất cả các cặp phần tử (𝑎[𝑖], 𝑎[𝑗]) trong mảng có
// tổng bằng 𝑋 (với 𝑖 < 𝑗).
void timCapSoTongBangX(int a[], int n, int X);

// 46. Viết hàm sắp xếp mảng sao cho các số lẻ tăng dần, các số chẵn giữ nguyên
// vị trí.
void sapXepSoLeTangDan(int a[], int n);

// 47. Cho mảng 𝑎 chứa 𝑛 số nguyên phân biệt trong khoảng từ 0 đến 𝑛. Viết hàm
// tìm số duy nhất còn thiếu trong khoảng đó. (Ví dụ: mảng [0, 1, 3, 4] với 𝑛 =
// 4 thì thiếu số 2).
int timPhanTuConThieu(int a[], int n);

#endif