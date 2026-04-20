#ifndef STRING_ADVANCED_H
#define STRING_ADVANCED_H

// 41-42. Tìm và thay thế
void timVaThayThe(char s[], char sub_find[], char sub_replace[]);
void timVaThayTheTatCa(char s[], char sub_find[], char sub_replace[]);

// 43-44. Tìm từ dài nhất & đảo ngược
void timTuDaiNhat(char s[], char longestWord[]);
void daoNguocTu(char s[]);

// 45-50. Các bài nâng cao
int tinhTongCacSo(char s[]);
int laEmailHopLe(char s[]);
void tachHoTen(char s[], char ho[], char tenLot[], char ten[]);
void timChuoiDoiXungDaiNhat(char s[], char result[]);
void nenChuoi(char s[], char result[]);
void giaiNenChuoi(char s[], char result[]);

#endif