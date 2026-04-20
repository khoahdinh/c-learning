#include <stdio.h>

#include "../include/string_io.h"
#include "../include/string_case.h"
#include "../include/string_stdlib.h"
#include "../include/string_search.h"
#include "../include/string_transform.h"
#include "../include/string_advanced.h"

int main() {
    char s[1000];
    
    // Test Nhóm 1
    printf("=== NHOM 1: NHAP/XUAT ===\n");
    nhapChuoi(s);
    xuatChuoi(s);
    printf("Chieu dai: %d\n", my_strlen(s));
    
    // Test Nhóm 2
    printf("\n=== NHOM 2: CASE ===\n");
    chuyenInHoa(s);
    xuatChuoi(s);
    
    // ... test các nhóm khác
    
    return 0;
}