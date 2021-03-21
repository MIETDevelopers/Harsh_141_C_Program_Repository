//Author name:Harsh Mahajan
//WAP to create Simple Calculator using switch case and function for every operation
#include<stdio.h>
int main(){
    char operator;
    double a, b;
    printf("Enter an operator (+, -, *, /):"); //It will print the operater to be entered by user
    scanf("%c", &operator); //It will scan the operater entered by user
    printf("Enter two number:");
    scanf("%lf %lf",&a, &b); //It will scan the numbers entered by user
    switch(operator) //Switch case is used to perfom the calculation 
    {
        case '+':
            printf("%.2lf + %.2lf = %.2lf",a, b, a+b); //Addition Function
            break;

        case '-':
            printf("%.2lf - %.2lf = %.2lf",a, b, a-b); //Subtraction Function
            break;

        case '*':
            printf("%.2lf * %.2lf = %.2lf",a, b, a*b); //Multiplication Function
            break;

        case '/':
            printf("%.2lf / %.2lf = %.2lf",a, b, a/b); //Division Function
            break;
    printf("Error encountered by the input values");  //Default
    }
    return 0;
} //End of the main function body