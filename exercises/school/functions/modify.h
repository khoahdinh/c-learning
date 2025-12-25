#ifndef MODIFY_H
#define MODIFY_H

// 44. Hoán vị giá trị của hai biến nguyên a và b.
    void swapInt(int &a, int &b);

// 45. Hoán vị giá trị của hai biến thực a và b.
    void swapFloat(float &a, float &b);

// 46. Tăng giá trị của biến n lên 1 đơn vị.
    void increment(int &n);

// 47.Sắp xếp 2 số, sao cho sau khi gọi hàm, a luôn nhỏ hơn hoặc bằng b.
    void orderTwo(int &a, int &b);

// 48. sortThree(int &a, int &b, int &c): Sắp xếp 3 số nguyên theo thứ tự tăng dần (có thể gọi orderTwo 3 lần).
    void sortThree(int &a, int &b, int &c);

/* 49. Giải phương trình bậc hai ax^2 + bx + c = 0. Gán các nghiệm tìm được vào x1,
x2 và số lượng nghiệm (0, 1, 2) vào numRoots.*/
    void getRoots(float a, float b, float c, float &x1, float &x2, int &numRoots);

// 50. Phân tích tổng số giây (totalSeconds) thành số giờ (h), số phút (m) và số giây (s).
    void decomposeTime(int totalSeconds, int &h, int &m, int &s);

#endif