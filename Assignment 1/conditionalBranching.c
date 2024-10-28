// Conditional Branching
#include <stdio.h>
int main(){
    int a = 5;
    int b = 12;
    int c = 24;
    int d = 5;

    // if Statement
    if(c > b){
        printf("c is greater than b\n");
    }

    // if-else Statement
     if(a > b){
        printf("a is greater than b\n");
    }
    else{
        printf("a is not greater than b\n");
    }

    // switch statement
    switch(a){
        case 1:
            printf("The number is 1\n");
            break;
        case 2:
            printf("The number is 2\n");
            break;
        case 3:
            printf("The number is 3\n");
            break;
        case 4:
            printf("The number is 4\n");
            break;
        case 5:
            printf("The number is 5\n");
            break;
        case 6:
            printf("The number is 6\n");
            break;
    }
    return 0;
}