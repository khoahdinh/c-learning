#include <limits.h>
#include <stdio.h>

#include "../include/array_advanced.h"

// 38. Viết hàm xóa các phần tử bị trùng trong mảng, chỉ giữ lại phần tử xuất
// hiện đầu tiên.

void xoaPhanTuTrungNhau(int a[], int &n) {

  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (a[i] == a[j]) {
        // Dịch mảng sang trái
        for (int m = j; m < n - 1; m++) {
          a[m] = a[m + 1];
        }
        n--;
        j--; // ← Giảm j để kiểm tra lại vị trí này
      }
    }
  }
}

// 39. Viết hàm liệt kê tần suất xuất hiện của các phần tử trong mảng. (Gợi ý:
// Có thể dùng một mảng phụ để đánh dấu các phần tử đã đếm).

// Cách 1:
// void lietKeTanSuat(int a[], int n) {

//   int mangPhu[100];
//   int nPhu = n;

//   for (int i = 0; i < n; i++) {
//     mangPhu[i] = a[i];
//   }

//   xoaPhanTuTrungNhau(mangPhu, nPhu);

//   for (int i = 0; i < nPhu; i++) {
//     int dem = 0;

//     for (int j = 0; j < n; j++) {
//       if (mangPhu[i] == a[j]) {
//         dem++;
//       }
//     }

//     printf("%d xuat hien %d lan\n", mangPhu[i], dem);
//   }
// }

// Cách 2:

void lietKeTanSuat(int a[], int n) {

  bool daDem[100] = {false}; // Đánh dấu phần tử đã đếm

  for (int i = 0; i < n; i++) {
    if (daDem[i])
      continue; // Bỏ qua nếu đã đếm

    int dem = 1; // Đã có phần tử 1 tại i

    for (int j = i + 1; j < n; j++) {
      if (a[i] == a[j]) {
        dem++;
        daDem[j] = true; // Đánh dấu đã đếm
      }
    }

    printf("%d xuat hien %d lan\n", a[i], dem);
  }
}

// 40.  Viết hàm trộn hai mảng 𝑎 và 𝑏 đã được sắp xếp tăng dần thành một mảng 𝑐
// cũng được sắp xếp tăng dần.

// Giống như xếp 2 chồng bài đã sắp sẵn thành 1 chồng:
// mỗi lần lấy lá bài trên cùng nhỏ hơn từ 1 trong 2 chồng.

void tronHaiMangDaSapXep(int a[], int n, int b[], int m, int c[], int &p) {

  int i = 0, j = 0, k = 0;

  // Trộn khi cả 2 mảng còn phần tử
  while (i < n && j < m) {
    if (a[i] < b[j]) {
      c[k] = a[i];
      i++;
    } else {
      c[k] = b[j];
      j++;
    }
    k++;
  }

  // Copy phần còn lại (nếu có)
  while (i < n) {
    c[k] = a[i];
    k++;
    i++;
  }

  while (j < m) {
    c[k] = b[j];
    k++;
    j++;
  }

  p = k; // Tổng số phần tử đã trộn
}

// 41. Viết hàm chèn cả mảng 𝑏 (gồm 𝑚 phần tử) vào mảng 𝑎 (gồm 𝑛 phần tử) tại vị
// trí 𝑘.

// CÁCH 1: Dịch và chèn từng phần tử
// void chenMangBVaoMangA(int a[], int &n, int b[], int m, int k) {

//   // Kiểm tra vị trí hợp lệ
//   if (k < 0 || k > n) {
//     printf("Vi tri chen khong hop le!\n");
//     return;
//   }

//   // Mỗi vòng lặp: dịch 1 lần rồi chèn 1 phần tử
//   // → Tổng cộng dịch m lần
//   for (int j = 0; j < m; j++) {
//     for (int i = n; i > k; i--) {
//       a[i] = a[i - 1]; // Dịch phải
//     }

//     a[k] = b[j];
//     k++;
//     n++;
//   }
// }

// CÁCH 2: Dịch 1 lần rồi copy toàn bộ
void chenMangBVaoMangA(int a[], int &n, int b[], int m, int k) {

  // Kiểm tra vị trí hợp lệ
  if (k < 0 || k > n) {
    printf("Vi tri chen khong hop le!\n");
    return;
  }

  // Dịch các phần tử từ vị trí k về sau sang phải m vị trí
  for (int i = n - 1; i >= k; i--) {
    a[i + m] = a[i]; // Dịch phải
  }

  // Copy toàn bộ mảng b vào vị trí k
  for (int j = 0; j < m; j++) {
    a[k + j] = b[j];
  }

  // Tăng số phần tử
  n += m;
}

// 42.  Viết hàm tìm đoạn con (liên tiếp) tăng dài nhất trong mảng. Hàm trả về
// độ dài của đoạn con và lưu vị trí bắt đầu 𝑘.

int timDoanConTangDaiNhat(int a[], int n, int &k) {

  int maxLength = 1;     // Độ dài đoạn con tăng dài nhất
  int currentPos = 0;    // Vị trí bắt đầu đoạn dài nhất
  int currentLength = 1; // Độ dài đoạn con tăng hiện tại

  // Duyệt mảng từ phần tử thứ 2
  for (int i = 1; i < n; i++) {

    if (a[i] > a[i - 1]) {
      // Nếu phần tử hiện tại > phần tử trước -> đoạn tăng tiếp tục
      currentLength++;

    } else {
      // Gặp phần tử không tăng -> đoạn tăng bị đứt

      // So sánh độ dài đoạn vừa kết thúc với đoạn dài nhất
      if (currentLength >= maxLength) {
        maxLength = currentLength;
        currentPos = i - maxLength; // Vị trí bắt đầu = vị trí hiện tại - độ dài
      }

      // Reset để bắt đầu đoạn tăng mới
      currentLength = 1;
      continue;
    }
  }

  // Kiểm tra đoạn cuối cùng (trường hợp đoạn tăng kết thúc ở cuối mảng)
  if (currentLength >= maxLength) {
    maxLength = currentLength;
    currentPos = n - maxLength; // Vị trí bắt đầu đoạn cuối
  }

  k = currentPos;   // Lưu vị trí bắt đầu vào tham chiếu k
  return maxLength; // Trả về độ dài
}

// 43. Viết hàm tìm đoạn con (liên tiếp) có tổng lớn nhất trong mảng
// (sử dụng thuật toán Kadane).

// Cách 1:
// int timDoanConTongLonNhat(int a[], int n, int &start, int &end) {

//   int maxSum = INT_MIN;
//   int currentSum = 0;

//   start = 0;  // Vị trí bắt đầu đoạn có tổng lớn nhất
//   end = 0;    // Vị trí kết thúc đoạn có tổng lớn nhất

//   for (int i = 0; i < n; i++) {
//     for (int j = i; j < n; j++) {
//       currentSum = currentSum + a[j];
//       if (currentSum > maxSum) {
//         maxSum = currentSum;
//         start = i;
//         end = j;
//       }
//     }
//     currentSum = 0;
//   }
//   return maxSum;
// }

// Cách 2:
int max(int a, int b) { return (a > b) ? a : b; }

int timDoanConTongLonNhat(int a[], int n) {

  int maxCurrent = a[0]; // Tổng đoạn kết thúc tại i
  int maxGlobal = a[0];  // Tổng lớn nhất tìm được

  for (int i = 1; i < n; i++) {
    maxCurrent = max(maxCurrent + a[i], a[i]);
    maxGlobal = max(maxCurrent, maxGlobal);
  }

  return maxGlobal;
}

// Cách 2: Update vị trí Đoạn có tổng lớn nhất.

int timDoanConTongLonNhat(int a[], int n, int &start, int &end) {

  int maxCurrent = a[0]; // Tổng đoạn kết thúc tại i
  int maxGlobal = a[0];  // Tổng lớn nhất tìm được

  int currentStart = 0; // Vị trí bắt đầu đoạn hiện tại
  start = 0;            // Vị trí bắt đầu đoạn tốt nhất
  end = 0;              // Vị trí kết thúc đoạn tốt nhất

  for (int i = 1; i < n; i++) {

    // Nếu bắt đầu mới tốt hơn (a[i] > maxCurrent + a[i])
    if (a[i] > maxCurrent + a[i]) {
      maxCurrent = a[i];
      currentStart = i; // Đoạn mới bắt đầu từ i
    } else {
      maxCurrent = maxCurrent + a[i]; // Giữ đoạn cũ
    }

    // Cập nhật tổng lớn nhất
    if (maxCurrent > maxGlobal) {
      maxGlobal = maxCurrent;
      start = currentStart; // Lưu vị trí bắt đầu
      end = i;              // Lưu vị trí kết thúc
    }
  }
  return maxGlobal;
}

// 44. Viết hàm dịch phải xoay vòng mảng 𝑘 đơn vị.

void dichPhaiXoayVongKDonVi(int a[], int n, int k) {

  k = k % n;
  if (k == 0)
    return;

  int temp[100];

  // Lưu k phần tử cuối vào mảng tạm
  for (int i = 0; i < k; i++) {
    temp[i] = a[n - k + i];
  }

  // Dịch các phần tử còn lại sang phải
  for (int i = n - 1; i >= k; i--) {
    a[i] = a[i - k];
  }

  // Đưa k phần tử cuối về đầu
  for (int i = 0; i < k; i++) {
    a[i] = temp[i];
  }
}

// 45.  Viết hàm tìm và in ra tất cả các cặp phần tử (𝑎[𝑖], 𝑎[𝑗]) trong mảng có
// tổng bằng 𝑋 (với 𝑖 < 𝑗).

void timCapSoTongBangX(int a[], int n, int X) {

  int count = 0;
  printf("Cac cap so co tong bang %d:\n", X);

  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (a[i] + a[j] == X) {
        printf("(%d , %d)\n", a[i], a[j]);
        count++;
      }
    }
  }

  if (count == 0) {
    printf("Khong co cap nao!\n");
  }
}

// 46. Viết hàm sắp xếp mảng sao cho các số lẻ tăng dần, các số chẵn giữ nguyên
// vị trí.

// Cách 1:
// void sapXepSoLeTangDan(int a[], int n) {
//   for (int i = 0; i < n - 1; i++) {
//     if (a[i] % 2 == 0)
//       continue;
//     for (int j = i + 1; j < n; j++) {
//       if (a[j] % 2 == 0)
//         continue;
//       if (a[i] > a[j]) {
//         int temp = a[i];
//         a[i] = a[j];
//         a[j] = temp;
//       }
//     }
//   }
// }

// Cách 2:
void sapXepSoLeTangDan(int a[], int n) {
  // Tách các số lẻ ra mảng riêng
  int odd[100], oddIndex[100]; // Lưu giá trị và vị trí
  int countOdd = 0;

  for (int i = 0; i < n; i++) {
    if (a[i] % 2 != 0) {
      odd[countOdd] = a[i];
      oddIndex[countOdd] = i;
      countOdd++;
    }
  }

  // Sắp xếp mảng số lẻ
  for (int i = 0; i < countOdd - 1; i++) {
    for (int j = i + 1; j < countOdd; j++) {
      if (odd[i] > odd[j]) {
        int temp = odd[i];
        odd[i] = odd[j];
        odd[j] = temp;
      }
    }
  }

  // Đưa số lẻ đã sắp xếp vào vị trí cũ
  for (int i = 0; i < countOdd; i++) {
    a[oddIndex[i]] = odd[i];
  }
}

// 47. Cho mảng 𝑎 chứa 𝑛 số nguyên phân biệt trong khoảng từ 0 đến 𝑛. Viết hàm
// tìm số duy nhất còn thiếu trong khoảng đó. (Ví dụ: mảng [0, 1, 3, 4] với 𝑛 =
// 4 thì thiếu số 2).

int timPhanTuConThieu(int a[], int n) {

  int ketQua = 0;

  // Bước 1: XOR tất cả số từ 0 đến n
  // Sau bước này: ketQua = 0 ^ 1 ^ 2 ^ 3 ^ ... ^ n
  for (int i = 0; i <= n; i++) {
    ketQua ^= i;
  }

  // Bước 2: XOR tiếp với tất cả phần tử trong mảng
  // Các số trùng nhau sẽ triệt tiêu (a ^ a = 0)
  // Chỉ số thiếu sót sẽ còn lại (XOR có tính giao hoán a ^ b ^ a = b)
  for (int i = 0; i < n; i++) {
    ketQua ^= a[i];
  }

  // Số còn lại chính là số thiếu
  return ketQua;
}