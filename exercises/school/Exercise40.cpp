// Format file: clang-format -i yourfile.c
/*
Bài 40: Nhập vào 3 số thực 𝑎, 𝑏, 𝑐.
1. Kiểm tra xem 𝑎, 𝑏, 𝑐 có thể là độ dài 3 cạnh của một tam giác hay không.
2. Nếu có, phân loại tam giác đó là: tam giác đều, tam giác cân, tam giác vuông,
hay tam giác thường.

*/

#include <stdio.h>

int main() {

  // Input: so thuc a, b, c
  float a, b, c;
  bool isTriangle;

  printf("Nhap ba so thuc a b c: ");
  scanf("%f %f %f", &a, &b, &c);

  if (a + b > c && a + c > b && b + c > a) {
    isTriangle = true;
  } else {
    isTriangle = false;
  }

  if (isTriangle) {

    if (a == b && a == c) {
      printf("Do dai %.1f %.1f %.1f la: Tam giac thuong", a, b, c);
    } else if (a == b || a == c || b == c) {
      printf("Do dai %.1f %.1f %.1f la: Tam giac can", a, b, c);
    } else if (a * a + b * b == c * c || a * a + c * c == b * b ||
               b * b + c * c == a * a) {
      printf("Do dai %.1f %.1f %.1f la: Tam giac vuong", a, b, c);
    } else {
      printf("Do dai %.1f %.1f %.1f la: Tam giac thuong", a, b, c);
    }

  } else {
    printf("Do dai %.1f %.1f %.1f khong phai la 3 canh cua mot tam giac", a, b,
           c);
  }

  return 0;
}
