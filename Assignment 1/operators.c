// Operators
#include <stdio.h>
int main(){
    int a = 27; 
    int b = 52;
    int c = 52;
    int d = 12;

// Arithmetic Operators
    // Addition
    int add = a + b;
    printf("The addition of a and b is %d \n", add);
    // Subtraction
    int subtract = a - b;
    printf("The subtraction of b from a is %d \n", subtract);
    // Multiplication
    int multiply = a*b;
    printf("The multiplication of a and b is %d\n", multiply);
    // Division
    float division = (float)a/b;
    printf("The division of a by b is %f\n", division);
    // Remainder
    int remainder = a%b;
    printf("The remainder of a divided by b is %d\n", remainder);

// Relational Operators
    // Eqaul to
    if(b==c){
        printf("b is equal to c\n");
    }
    else{
        printf("b is not eqaul to c\n");
    }
    // Not Equal to
    if(a!=b){
        printf("a is not equal to b\n");
    }
    else{
        printf("a is equal to b\n");
    }
    // Greater than
    if(a>b){
        printf("a is greater than b\n");
    }
    else{
        printf("a is not greater than b\n");
    }
    // Less than
    if(a<b){
        printf("a is less than b\n");
    }
    else{
        printf("a is not less than b\n");
    }
    // Greater than or eqaul to
    if(b>=c){
        printf("b is greater than or equal to c\n");
    }
    else{
        printf("b is not greater than nor eqaul to c\n");
    }
    // Less than or equal to
    if(b<=c){
        printf("b is less than or equal to c\n");
    }
    else{
        printf("b is not less than nor eqaul to c\n");
    }

// Logical Operators   
    // [&&] AND (True if both the conditions are true)
    if(a>b && b>d){
        printf("a is greater than b and b is greater than c\n");
    }
    else{
        printf("Either a is not greater than b or b is not greater than c or both of then don't satify the codition\n");
    }
    // [||] OR (Tre if alteast one of the statement is true)
    if(a>b || b>d){
        printf("Either a is greater than b or b is greater than d or both condition satisfy\n");
    }
    else{
        printf("a is not greater than b and b is not greater than c\n");
    }
    // [!] NOT 
    if(!(a > b)){
        printf("a is less than b\n");
    }
    else{
        printf("b is greater than a\n");
    }

// Bitwise Operator
    int b1 = 3;
    int b2 = 5;

    // & (AND) Operator 
    printf("The result of b1 & b2 is %d\n", b1&b2);
    // | (OR) Operator
    printf("The result of b1 | b2 is %d\n", b1|b2);
    // ^ (XOR) Operator  
    printf("The result of b1 ^ b2 is %d\n", b1^b2);
    // ~ (NOT) Operator
    printf("The result of ~b1 is %d\n", ~b1);
    // << (Left Shift)
    printf("The result of b1 by leftshifting by 1 is %d\n", b1 <<1);
    // << (Right Shift)
    printf("The result of b1 by rightshifting by 1 is %d\n", b1 >>1);

// Ternary Operator
    int greater = (a > b)? a:b;
    printf("The value of a is %d anf the value of b is %d, the greater value is %d", a, b, greater);

}
