#include <ctype.h>
#include <stdio.h>
#include <string.h>

#include "../include/string_io.h"

// Nhóm 1: Nhập, Xuất và Thuộc tính cơ bản

//  1. Nhập chuỗi: Viết hàm nhập một chuỗi, cho phép nhập cả khoảng trắng (sử
// dụng fgets thay vì scanf("%s")).
void nhapChuoi(char s[]) {

  printf("Nhap chuoi: ");
  fgets(s, MAX_STRING_LEN, stdin);
  // Tìm vị trí '\n' và thay bằng ký tự kết thúc chuỗi
  s[strcspn(s, "\n")] = '\0'; // strcspn(str1, str2): vị trí (index) của ký tự
                              // đầu tiên trong str1 mà có mặt trong str2
}

// 2. Xuất chuỗi: Viết hàm xuất chuỗi đã nhập.
void xuatChuoi(char s[]) { printf("Chuoi vua nhap: %s\n", s); }

// 3. Tính chiều dài: Viết hàm int my_strlen(char s[]) tính và trả về độ dài
// chuỗi (không dùng strlen).
int my_strlen(char s[]) {

  int len = 0;
  while (s[len] != '\0') {
    len++;
  }
  return len;
}

// 4. Đếm nguyên âm: Viết hàm đếm số lượng nguyên âm (a, e, i, o, u, cả hoa và
// thường) trong chuỗi.
int demNguyenAm(char s[]) {

  int count = 0;
  for (int i = 0; i < strlen(s); i++) {
    char c = tolower(s[i]); // Chuyển về chữ thường để dễ so sánh
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
      count++;
    }
  }
  return count;
}

// 5. Đếm phụ âm: Viết hàm đếm số lượng phụ âm trong chuỗi.
int demPhuAm(char s[]) {
  int count = 0;
  for (int i = 0; i < strlen(s); i++) {
    char c = tolower(s[i]); // Chuyển về chữ thường để dễ so sánh
    if (isalpha(c) && // isalpha: kiểm tra xem một ký tự có phải là chữ cái hay
                      // không
        c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
      count++;
    }
  }
  return count;
}

// 6. Đếm khoảng trắng: Viết hàm đếm số lượng ký tự khoảng trắng trong chuỗi.
int demKhoangTrang(char s[]) {

  int count = 0;
  for (int i = 0; i < strlen(s); i++) {
    if (s[i] == ' ') {
      count++;
    }
  }
  return count;
}

// 7. Đếm chữ số: Viết hàm đếm số lượng chữ số (0-9) trong chuỗi (dùng isdigit).
int demChuSo(char s[]) {

  int count = 0;
  for (int i = 0; i < strlen(s); i++) {
    if (isdigit(s[i])) {
      count++;
    }
  }
  return count;
}

// 8. Đếm ký tự đặc biệt: Viết hàm đếm số lượng ký tự không phải là chữ cái, chữ
// số, hoặc khoảng trắng.
int demKyTuDacBiet(char s[]) {

  int count = 0;
  for (int i = 0; i < strlen(s); i++) {
    if (!isalpha(s[i]) && !isdigit(s[i]) && s[i] != ' ') {
      count++;
    }
  }
  return count;
}