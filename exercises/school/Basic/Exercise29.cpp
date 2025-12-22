// Format file: clang-format -i yourfile.c
/*
Bài 29: Máy tính sẽ "nghĩ" ra một số ngẫu nhiên trong khoảng từ 1 đến 100. Người
dùng có 7 lượt để đoán. Sau mỗi lần đoán, chương trình sẽ thông báo "Số bạn đoán
lớn hơn" hoặc "Số bạn đoán nhỏ hơn". Nếu đoán đúng, thông báo chiến thắng và kết
thúc. Nếu hết 7 lượt mà chưa đoán đúng, thông báo thua cuộc và tiết lộ con số bí
mật. • Gợi ý: Để tạo số ngẫu nhiên, cần dùng srand(time(0)); và rand() % 100 +
1; Cần include stdlib.h và time.h.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

  // Input: số dự đoán, lượt chơi
  int guess;
  int attempts = 0;
  int maxAttempts = 7;

  // Tạo số bí mật
  srand(time(NULL));
  int secretNumber = rand() % 100 + 1;

  printf("*** TRO CHOI DOAN SO BI MAT ***\n");
  printf("Ban co %d luot doan \n\n", maxAttempts);

  while (attempts < maxAttempts) {
    printf("Nhap so du doan: ");
    scanf("%d", &guess);

    if (guess > secretNumber) {
      printf("So ban doan lon hon\n");
    } else if (guess < secretNumber) {
      printf("So ban doan nho hon\n");
    }else {
      printf("Chuc mung ban da chien thang!");
      return 0;
    }

    attempts++;
    printf("Con lai %d luot\n\n", maxAttempts - attempts);
  }
  if (attempts == maxAttempts) {
    printf("Ban da thua cuoc!\n");
    printf("So bi mat la: %d", secretNumber);
  }

  return 0;
}