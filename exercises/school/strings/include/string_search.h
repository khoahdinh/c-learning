#ifndef STRING_SEARCH_H
#define STRING_SEARCH_H

// 20. Kiểm tra đối xứng
int laChuoiDoiXung(char s[]);

// 21. Đếm số từ
int demSoTu(char s[]);

// 22-23. Tìm từ đầu/cuối
void timTuDauTien(char s[], char word[]);
void timTuCuoiCung(char s[], char word[]);

// 24. Đảo ngược chuỗi
void daoNguocChuoi(char s[]);

// 25. Tìm ký tự xuất hiện nhiều nhất
char timKyTuMax(char s[]);

// 26-28. Các hàm kiểm tra
int coChuaChuoiCon(char s[], char sub[]);
int laSoNguyen(char s[]);
int laSoThuc(char s[]);

// 29. Nối chuỗi an toàn
void noiChuoiAnToan(char s1[], char s2[], int maxSize);

#endif