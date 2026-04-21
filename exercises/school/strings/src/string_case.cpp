#include <ctype.h>
#include <stdio.h>
#include <string.h>

#include "../include/string_case.h"

// Nhóm 2: Thao tác với ctype.h

// 9. Chuyển sang in hoa: Viết hàm void chuyenInHoa(char s[]) chuyển tất cả ký
// tự thường thành hoa (dùng toupper).
void chuyenInHoa(char s[]) {
  for (int i = 0; i < strlen(s); i++) {
    s[i] = toupper(s[i]);
  }
}

// 10.Chuyển sang in thường: Viết hàm void chuyenInThuong(char s[]) chuyển tất
// cả ký tự hoa thành thường (dùng tolower).
void chuyenInThuong(char s[]) {
  for (int i = 0; i < strlen(s); i++) {
    s[i] = tolower(s[i]);
  }
}

// 11.Nghịch đảo case: Viết hàm void nghichDaoCase(char s[]) chuyển ký tự hoa
// thành thường và ngược lại.
void nghichDaoCase(char s[]) {
  for (int i = 0; i < strlen(s); i++) {
    if (isalpha(s[i]) && islower(s[i])) {
      s[i] = toupper(s[i]);
    } else if (isalpha(s[i]) && isupper(s[i])) {
      s[i] = tolower(s[i]);
    }
  }
}

// 12.Viết hoa ký tự đầu: Viết hàm void hoaKyTuDau(char s[]) chỉ chuyển ký tự
// đầu tiên của chuỗi sang in hoa (nếu nó là chữ cái)
void hoaKyTuDau(char s[]) {
  if (isalpha(s[0])) {
    s[0] = toupper(s[0]);
  }
}

// 13.Viết hoa chữ cái đầu mỗi từ: Viết hàm void hoaDauTu(char s[]) chuyển ký tự
// đầu tiên của mỗi từ sang in hoa (ví dụ: "nguyen van a" -> "Nguyen Van A").
void hoaDauTu(char s[]) {

  if (isalpha(s[0])) {
    s[0] = toupper(s[0]);
  }

  for (int i = 1; i < strlen(s); i++) {
    if (isalpha(s[i]) && s[i - 1] == ' ') {
      s[i] = toupper(s[i]);
    }
  }
}