#include<stdio.h>
float calculator(float, float, char); //Function Declaration
int main(){
    float num1, num2;
    char operator;
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);
    printf("Enter the operation that needs to be performed:( eg: +, -, *, /): ");
    scanf(" %c", &operator);
    float result = calculator(num1, num2, operator);
    if (num2==0 && num1/num2)
    {
        printf("Infinity number ");
    }
    else
    printf("Result is %.2f", result);
    return 0; 
}//End main
//Function defination
float calculator(float a, float b, char c){
    float result;
    switch (c)
    {
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;
    case '/':
        result = a / b;
        break;
    default:
        printf("Enter a valid operator!");
        break;
    }
    return result;
} //End calculator