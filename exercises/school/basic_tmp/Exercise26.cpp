// Format file: clang-format -i yourfile.c
/*
Bài 26: Viết chương trình yêu cầu người dùng nhập liên tục các số nguyên. Quá
trình nhập sẽ dừng lại khi người dùng nhập số 0. Sau khi dừng, hãy đếm và in ra
có bao nhiêu số dương và bao nhiêu số âm đã được nhập.
*/

#include <stdio.h>

int main() {
  // Input: n, demDuong, demAm
  int n, demDuong = 0, demAm = 0;

  do {
    printf("Nhap so nguyen (nhap 0 de dung): ");
    scanf("%d", &n);

    if (n > 0) {
      demDuong++;
    } else if (n < 0) {
      demAm++;
    }

  } while (n != 0);

  printf("Co %d so am da duoc nhap\n", demAm);
  printf("Co %d so duong da duoc nhap", demDuong);

  return 0;
}
