//Author Name:Harsh Mahajan
//WAP to swap two numbers using call by value
#include <stdio.h> 
  
int main() 
{ 
    int x, y; 
    printf("Enter Value of x "); 
    scanf("%d", &x); 
    printf("\nEnter Value of y "); 
    scanf("%d", &y); 
    
    //Here swapping of number occurs.
    int temp = x; 
    x = y; 
    y = temp; 
  
    printf("\nAfter Swapping: x = %d, y = %d", x, y); 
    return 0; 
} //End of the main function body