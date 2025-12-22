// Format file: clang-format -i yourfile.c
/*
Bài 12: Viết chương trình nhập vào điểm trung bình của một sinh viên (thang điểm
10). Dựa vào điểm số, phân loại và in ra học lực: • 0.0 ≤ đ𝑖ể𝑚 < 5.0: Yếu • 5.0
≤ đ𝑖ể𝑚 < 6.5: Trung bình • 6.5 ≤ đ𝑖ể𝑚 < 8.0: Khá • 8.0 ≤ đ𝑖ể𝑚 ≤ 10.0: Giỏi
*/

#include <stdio.h>

int main() {

  // Input: score
  float score;

  printf("Nhap so diem trung binh: ");
  scanf("%f", &score);

  // Check score
  if (score < 0 || score > 10) {
    printf("Nhap sai so diem");
    return 0;
  }

  if (score < 5.0) {
    printf("Xep loai sinh vien: YEU");
  } else if (score < 6.5) {
    printf("Xep loai sinh vien: TRUNG BINH");
  } else if (score < 8.0) {
    printf("Xep loai sinh vien: KHA");
  } else {
    printf("Xep loai sinh vien: GIOI");
  }

  return 0;
}
