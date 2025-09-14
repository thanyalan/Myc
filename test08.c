/*
    switch( expression ){
        case value1:
            คําสั่ง...
            break; ไม่มีก็ได้
        case value2: ...
            คําสั่ง...
            break;
        case value3: ...
            คําสั่ง...
            break; 
        default: ไม่มีก็ได้ 
            คําสั่ง...
            break;
    }
*/

#include <stdio.h>

int level; //ประกาศตัวแปร (declare variable)

int main() {
    //int level; //ประกาศตัวแปร (declare local veriable)

    printf("-----------------------------\n");
    printf("     Welcome Student\n         ");
    printf("-----------------------------\n");
    printf("Enter your level : ");
    scanf("%d", &level);
    printf("-----------------------------\n");


    switch (level) {
        case 1:
            printf("Hello, You are a freashman\n");
            break;
        case 2:
            printf("Hello, You are a sophomore\n");
            break;
        case 3:
            printf("Hello, You are a junior\n");
            break;
        case 4:
            printf("Hello, You are a senior\n");
            break;
        default:
            printf("Hello, T_T\n");
            break;
    }

    printf("-----------------------------\n");
    return 0;

}