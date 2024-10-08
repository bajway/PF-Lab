/*Number guessing program or linear search*/
#include <stdio.h>
 int main() {
    //Declaring variable
      int a,i;
      int n[10] = {44,14,16,39,56,45,34,11,20,10}; //Declaring array
      
     //Prmpting the user to input number
      printf("Enter a number from 0 to 99: ");
      scanf("%d",&a);
   for(i=0; i < 10 ; i++)//Running the loop 10 times 0-9
   {
     if(n[i]==a)
    {
         printf("you Guessed the number, hurray!");
         return 0;
     }// End if
   }// End for loop
   
   printf("Failed, try again");
   return 0;
 }// End main