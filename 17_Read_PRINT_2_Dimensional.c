//Author name:Harsh Mahajan
//WAP to read and print elements in two dimensional array
#include<stdio.h>
int main(){
   //2D array declaration
   int disp[2][3];
   
   int i, j;
   for(i=0; i<2; i++) {
      for(j=0;j<3;j++) {
         printf("Enter value for disp[%d][%d]:", i, j);
         scanf("%d", &disp[i][j]);
      }
   }
   
   //Displaying array elements
   
   printf("Two Dimensional array elements:\n");
   for(i=0; i<2; i++) {
      for(j=0;j<3;j++) {
         printf("%d ", disp[i][j]);
         if(j==2){
            printf("\n");
         }
      }
   }
   return 0;
} //End of the main function body