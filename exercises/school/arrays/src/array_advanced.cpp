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