#include<stdio.h>
void swapIntegers(int, int); //Function Declaration
int main(){
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    swapIntegers(num1, num2);
    return 0;
}// End main
//Function defination/body
void swapIntegers(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("Swapped integers are: %d %d", a, b);
} //End swapIntegers