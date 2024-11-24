#include<stdio.h>
#include<string.h>
#define max_len 20
void reverse_string( char*);//Function declaration
int main(){
    char str[max_len];
    printf("Enter a string: ");
    scanf("%s", &str);
    printf("Origional string is: %s\n", str);
    reverse_string(str); //Function call
    printf("Reversed string is: %s\n", str);
    return 0;
}// End main
//Function body
void reverse_string(char *str){
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++)
    {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    
} //End function