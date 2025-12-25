#include <math.h>
#include <stdio.h>

#include "modify.h"

// 44. swapInt(int &a, int &b): Hoán vị giá trị của hai biến nguyên a và b.

void swapInt(int &a, int &b) {

  int temp = a;
  a = b;
  b = temp;
}

// 45. swapFloat(float &a, float &b): Hoán vị giá trị của hai biến thực a và b.

void swapFloat(float &a, float &b) {

  float temp = a;
  a = b;
  b = temp;
}

// 46. increment(int &n): Tăng giá trị của biến n lên 1 đơn vị.

void increment(int &n) { n++; }

// 47. orderTwo(int &a, int &b): Sắp xếp 2 số, sao cho sau khi gọi hàm, a luôn
// nhỏ hơn hoặc bằng b.

void orderTwo(int &a, int &b) {
  if (a > b) {
    swapInt(a, b);
  }
}

// 48. sortThree(int &a, int &b, int &c): Sắp xếp 3 số nguyên theo thứ tự tăng
// dần (có thể gọi orderTwo 3 lần).

void sortThree(int &a, int &b, int &c) {
  // Làm cho a nhỏ nhất, sau đó orderTwo(b,c)
  orderTwo(a, b);
  orderTwo(a, c);
  orderTwo(b, c);
}

// 49. getRoots(float a, float b, float c, float &x1, float &x2, int &numRoots):
// Giải phương trình bậc hai ax^2 + bx + c = 0. Gán các nghiệm tìm được vào x1,
// x2 và số lượng nghiệm (0, 1, 2) vào numRoots.

void getRoots(float a, float b, float c, float &x1, float &x2, int &numRoots) {

  // Case a = 0
  if (a == 0) {
    if (b == 0 && c == 0) {
      numRoots = -1; // vô số nghiệm
    } else if (b == 0) {
      numRoots = 0; // vô nghiệm
    } else {
      x1 = x2 = (-c) / b;
      numRoots = 1; // 1 nghiệm
    }
    return;
  }

  // case: Phương trình bậc 2
  double delta = (b * b) - (4 * a * c);

  // Solve ...
  if (delta > 0) {
    x1 = (-b - sqrt(delta)) / (2 * a);
    x2 = (-b + sqrt(delta)) / (2 * a);
    numRoots = 2;
  } else if (delta == 0) {
    x1 = x2 = (-b) / (2 * a);
    numRoots = 1;
  } else {
    numRoots = 0;
  }
}

// 50. decomposeTime(int totalSeconds, int &h, int &m, int &s): Phân tích tổng
// số giây (totalSeconds) thành số giờ (h), số phút (m) và số giây (s).

void decomposeTime(int totalSeconds, int &h, int &m, int &s) {
  h = totalSeconds / 3600;
  m = (totalSeconds % 3600) / 60;
  s = (totalSeconds - (h * 3600) - (m * 60));
}