// Format file: clang-format -i yourfile.c
/*
Bài 3: Viết chương trình nhập vào 3 hệ số 𝑎, 𝑏, c của phương trình bậc hai 𝑎𝑥^2
+ 𝑏𝑥 + 𝑐 = 0. Biện luận và in ra kết quả (vô nghiệm, nghiệm kép, hoặc 2 nghiệm
phân biệt).
*/

#include <math.h>
#include <stdio.h>

int main() {
  // Input: a, b, c
  int a, b, c;

  printf("Nhap ba so nguyen a, b, c: ");
  scanf("%d %d %d", &a, &b, &c);

  // Case a = 0
  if (a == 0) {
    printf("Khong phai phuong trinh bac 2");
    return 0;
  }

  // Find delta
  double Delta = (b * b) - (4 * a * c);

  // Solve ...
  if (Delta > 0) {
    double x1 = (-b - sqrt(Delta)) / (2 * a);
    double x2 = (-b + sqrt(Delta)) / (2 * a);
    printf("Phuong trinh co 2 nghiem phan biet: x1 = %.2f ; x2 = %.2f", x1, x2);
  } else if (Delta == 0) {
    double x = (-b) / (2 * a);
    printf("Phuong trinh co nghiem kep x = %.2f", x);
  } else {
    printf("Phuong trinh vo nghiem");
  }

  return 0;
}
