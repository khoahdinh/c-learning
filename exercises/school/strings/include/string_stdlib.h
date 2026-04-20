#ifndef STRING_STDLIB_H
#define STRING_STDLIB_H

// 14. Sao chép chuỗi
void my_strcpy(char dest[], char src[]);

// 15. Nối chuỗi
void my_strcat(char dest[], char src[]);

// 16. So sánh chuỗi
int my_strcmp(char s1[], char s2[]);

// 17. Tìm ký tự
char* my_strchr(char s[], char c);

// 18. Tìm chuỗi con
char* my_strstr(char s[], char sub[]);

// 19. So sánh không phân biệt hoa thường
int my_strcmp_case(char s1[], char s2[]);

#endif