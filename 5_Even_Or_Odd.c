//Author :Harsh Mahajan
//WAP to check a Number is even or odd
#include <stdio.h>
int main() {//start of the main body function 
    int num;//Declaring variable of integer data type
    printf("Enter an integer: ");//Printf function calling to print an integer
    scanf("%d", &num);//Scanf function calling to input user input

    //if num is perfectly divisible by 2 then it is even otherwise odd using logic(num % 2 == 0)
    if(num % 2 == 0)//If statement
        printf("%d is even.", num);//Printf function calling to print even num
    else//Else statement
        printf("%d is odd.", num);//Printf function calling to print odd num
    
return 0;//return statememt
}//End of the main body function