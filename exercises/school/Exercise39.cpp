// Format file: clang-format -i yourfile.c
/*
Bài 39: Viết chương trình yêu cầu người dùng nhập vào 2 số thực và một ký tự là
phép toán
(+, -, *, /). Sử dụng switch-case để thực hiện phép tính tương ứng và in ra kết
quả. Yêu cầu xử lý trường hợp chia cho 0.

*/

#include <stdio.h>

int main() {

  // Input: so thuc a, b
  float a, b, result;
  char option;

  printf("*** CASIO FX 70 PROMAX ***\n");
  printf("Phep tinh: + - * /\n\n");
  printf("Nhap hai so thuc de thuc hien phep tinh: ");
  scanf("%f %f", &a, &b);
  printf("Chon phep tinh: ");
  scanf(" %c", &option); // Cách ra để không bị ăn nút Enter

  switch (option) {

  case '+':
    result = a + b;
    break;

  case '-':
    result = a - b;
    break;

  case '*':
    result = a * b;
    break;

  case '/':
    if (b == 0) {
      printf("Loi: Khong the chia cho 0");
      return 0;
    }
    result = a / b;
    break;

  default:
    printf("Phep toan khong hop le!");
    return 0;
  }

  printf("Ket qua phep toan: %.2f %c %.2f = %.2f", a, option, b, result);

  return 0;
}
