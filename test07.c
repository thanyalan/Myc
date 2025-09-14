/*
    if(  เงื่อนไข  ) {
        คําสั่ง...
    }else if(  เงื่อนไข  ) {
        คําสั่ง...
    }else if(  เงื่อนไข  ) {
        คําสั่ง...
    }else if(  เงื่อนไข  ) {
        คําสั่ง...
    }else{
        คําสั่ง...
    }
*/

#include <stdio.h>
int main() {
    int level;

    printf("-----------------------------\n");
    printf("     Welcome Student\n         ");
    printf("-----------------------------\n");
    printf("Enter your level : ");
    printf("%d", &level);
    printf("-----------------------------\n");


    if (level == 1) {
        printf("Hello, You are a freashman\n");
    }
    else if (level == 2){
        printf("Hello, You are a sophomore\n");
    }
    else if (level == 3){
        printf("Hello, You are a junior\n");
    }
    else if (level == 4){
        printf("Hello, You are a senior\n");
    }
    else {
        printf("Hello, T_T\n");
    }

    printf("-----------------------------\n");
    return 0;
}

