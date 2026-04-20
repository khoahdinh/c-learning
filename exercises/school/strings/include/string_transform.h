#ifndef STRING_TRANSFORM_H
#define STRING_TRANSFORM_H

// 30. Xóa ký tự
void xoaKyTu(char s[], char c);

// 31. Xóa khoảng trắng thừa
void xoaKhoangTrangThua(char s[]);

// 32. Chuẩn hóa tên
void chuanHoaTen(char s[]);

// 33. Thay thế ký tự
void thayTheKyTu(char s[], char c1, char c2);

// 34-35. Xóa/Chèn chuỗi con
void xoaChuoiCon(char s[], int viTri, int doDai);
void chenChuoi(char s1[], char s2[], int viTri);

// 36-40. Các hàm biến đổi khác
void sapXepKyTu(char s[]);
void tachHo(char hoTen[], char ho[]);
void tachTen(char hoTen[], char ten[]);
void inTuNguoc(char s[]);
void xoaChuSo(char s[]);

#endif