// Format file: clang-format -i yourfile.c
/*
Bài 24: Viết chương trình cho phép người dùng chọn:
1. Chuyển từ độ 𝐶 sang độ 𝐹.
2. Chuyển từ độ 𝐹 sang độ 𝐶.
Sau khi chọn, yêu cầu nhập nhiệt độ tương ứng và in ra kết quả. Dùng switch-case
để xử lý lựa chọn. 𝐹- = 𝐶- × 1.8 + 32 và 𝐶- = (𝐹- − 32)/1.8.
*/

#include <stdio.h>

int main() {

  // Input: c, f
  int command;
  float c, f;

  printf("*** PHAN MEM VIP ***\n");
  printf("Chon 1: Chuyen tu do C sang do F\n");
  printf("Chon 2: Chuyen tu do F sang do C\n");
  printf("____\n");
  printf("Moi ban chon lenh (1 or 2): ");
  scanf("%d", &command);

  switch (command) {
  case 1: {
    printf("Nhap so do C muon chuyen sang do F: ");
    scanf("%f", &c);
    float doF = (c * 1.8) + 32;
    printf("Do F cua %.1fC la: %.1fF", c, doF);
    break;
  }

  case 2: {
    printf("Nhap so do F muon chuyen sang do C: ");
    scanf("%f", &f);
    float doC = (f - 32) / 1.8;
    printf("Do c cua %.1fF la: %.1fC", f, doC);
    break;
  }

  default:
    printf("Nhap 1 hoac 2 dum su huynh!");
    break;
  }

  return 0;
}
