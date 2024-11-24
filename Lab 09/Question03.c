#include<stdio.h>
#include<math.h>
void isPrime(int); //Function Declaration
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    isPrime(num); //Calling funtion
    return 0;
} //End main
//Funtion defination
void isPrime(int a){
    if (a<=1){
        printf(" Not a Prime number !");
        return;
    }
    if (a == 2){
        printf("Prime number !");
        return;
    }
    if (a%2==0)
    {
        printf("Not a prime number !");
        return;
    }
    //Using for loop to check numbers till root of entered num
    for ( int i = 3; i < sqrt(a); i+=2)
    {
       if (a%i==0)
       {
           printf("Not a prime number !");
           return;
       }
        
    }
    printf("Prime number !");
} //End isPrime