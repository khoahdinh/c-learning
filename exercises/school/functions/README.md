# 📘 Bài tập Function – C/C++

## 📂 Cấu trúc file

### 1️⃣ main.cpp

- **Chức năng**:
  - File chạy chính của chương trình.
  - Dùng để **test tất cả các hàm** đã viết trong các nhóm.
- **Include**:
  - `check.h` → dùng các hàm kiểm tra.
  - `calculate.h` → dùng các hàm tính toán.
  - `modify.h` → dùng các hàm thay đổi giá trị (truyền tham chiếu).
- **Lý do**:
  - `main.cpp` **KHÔNG viết logic hàm**, chỉ gọi hàm để kiểm tra kết quả.

---

### 2️⃣ check.h

- **Chức năng**:
  - Chứa **khai báo (prototype)** các hàm kiểm tra.
  - Các hàm trả về kiểu `bool`.
- **Vai trò**:
  - Giúp các file khác (main.cpp, check.cpp, …) biết hàm tồn tại.
- **Bắt buộc**:
  - `check.cpp` và `main.cpp` **phải include `check.h`**.

---

### 3️⃣ check.cpp

- **Chức năng**:
  - Chứa **cài đặt (định nghĩa)** các hàm kiểm tra.
- **Nhóm hàm**:
  - isEven, isOdd, isPrime
  - isPerfectNumber, isPalindrome
  - isLeapYear, isVowel, isDigit, …
- **Lưu ý**:
  - Không có `main()`.
  - Phải include `"check.h"`.

---

### 4️⃣ calculate.h

- **Chức năng**:
  - Khai báo các **hàm tính toán** (trả về số).
- **Ví dụ hàm**:
  - calculateSumDigits
  - calculateFactorial
  - calculateSeriesSum, …
- **Vai trò**:
  - Cho phép `main.cpp` và `calculate.cpp` dùng chung prototype.

---

### 5️⃣ calculate.cpp

- **Chức năng**:
  - Cài đặt các hàm tính toán đã khai báo trong `calculate.h`.
- **Lưu ý**:
  - Phải include `"calculate.h"`.
  - Không chứa `main()`.

---

### 6️⃣ modify.h

- **Chức năng**:
  - Khai báo các **hàm dùng tham chiếu (reference)**.
- **Nhóm hàm**:
  - swapInt, swapFloat
  - increment
  - orderTwo, sortThree
  - getRoots, decomposeTime

---

### 7️⃣ modify.cpp

- **Chức năng**:
  - Cài đặt các hàm thay đổi giá trị biến thông qua tham chiếu.
- **Lưu ý**:
  - Phải include `"modify.h"`.
  - Không có `main()`.

---

## ▶️ Cách biên dịch & chạy chương trình

### Cách 1 (khuyên dùng)

```bash
g++ main.cpp check.cpp calculate.cpp modify.cpp -o main
./main

```
