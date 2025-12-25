#ifndef PRINT_H
#define PRINT_H

/*
    File: print.h
    Mô tả:
    - Chứa khai báo (prototype) các hàm THỦ TỤC.
    - Các hàm có kiểu void, KHÔNG trả về giá trị.
    - Chức năng chính: in kết quả ra màn hình.
    - File print.cpp sẽ include print.h để CÀI ĐẶT hàm.
    - main.cpp chỉ cần include print.h để sử dụng.
*/

    // 34. In ra một menu.
    void printMenu();

    // 35. In ra bảng cửu chương của n
    void printMultiplicationTable(int n);

    // 36. In ra tất cả các bảng cửu chương từ 2 đến 9.
    void printAllMultiplicationTables();

    // 37. In ra hình vuông đặc bằng dấu * kích thước size x size.
    void printSquare(int size);

    // 38. In ra hình chữ nhật rỗng kích thước width x height.
    void printHollowRectangle(int width, int height);

    // 39. In ra tam giác vuông cân tại góc trái dưới, có chiều cao height.
    void printRightTriangle(int height);

    // 40. In ra tất cả các số nguyên tố trong đoạn [start, end] (gọi isPrime).
    void printPrimesInRange(int start, int end);

    // 41. In ra các chữ số của n theo thứ tự ngược lại (ví dụ: 123 -> 3, 2, 1).
    void printDigitsReversed(int n);

    // 42. Hàm tổng hợp, gọi các hàm con (isEven, isPrime, getSumDigits) và in ra thông tin phân tích về số n.
    void analyzeNumber(int n);

    /* 43. Nhập ngày tháng năm, in ra thứ trong tuần (sử dụng công thức Zeller hoặc 
    một thuật toán tính thứ đơn giản). */
    void printDayOfWeek(int day, int month, int year);

#endif