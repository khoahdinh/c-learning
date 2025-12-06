// Variables in C
#include <stdio.h>

int main(){
    int myAge = 15;
    char myName = 'K';
    printf("My age is %d and my name is %c\n", myAge, myName);

    // Create a variable and assign  the value 7 to it
    int myNum = 7;
    // Create a variable and assign  the value 10 to it
    int myOtherNum = 10;
    // Assign the value of myNum to myOtherNum
    myOtherNum = myNum;
    // myOtherNum now has 15 as a value (7)
    printf("%d\n",myNum);

    int x, y, z;
    x = y = z = 5;
    printf("%d\n", x+y+z);

    int length = 4;
    int width = 6;
    int area;

    // Calculate the area of a rectangle
    area = length*width;
    // Print the variables
    printf("Length is: %d\n", length);
    printf("Width is: %d\n", width);
    printf("Area of the rectangle is: %d", area);
}