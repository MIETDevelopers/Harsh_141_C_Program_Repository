//Author name: Harsh Mahajan
//wap for Arithematic operations
#include <stdio.h>//preprocessor directive to include standard input output function header file
int main(){//main function body starts
    
    int a ,b , c; //variable declaration and value assignment
    
    printf("Enter two integers: \n");
    scanf("%d%d", &a, &b);
    
    c = a+b; //logic for adding two numbers
    printf("a+b = %d\n",c); //printf statement to print addition output
    c = a-b;//logic for subtracting two numbers
    printf("a-b = %d\n",c);//printf statement to print subtraction output
    c = a*b;//logic for multiplying two numbers
    printf("a*b = %d\n",c);//printf statement to print multiplication output
    c = a/b;//logic for dividing two numbers
    printf("a/b = %d\n",c);//printf statement to print division output
    c = a%b;//logic for remainder 
    printf("Remainder = %d\n",c);//printf statement to print remainder output
    
    return 0;//return statement
}//main function body ends
