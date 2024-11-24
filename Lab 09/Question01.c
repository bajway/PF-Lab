#include<stdio.h>
#include<string.h>
int main(){
    char word[5][20];
    int palindrome = 1; //Flag to check palindrome
    //Input names
    for (int i = 0; i < 5; i++)
    {
            printf("Enter word %d: \n", i + 1);
            scanf("%19s", &word[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        int x = strlen(word[i]);
        for (int j = 0 ; j < x/2 ; j++)
        {
            if (word[i][j]!=word[i][x-j-1])
            {
                palindrome = 0;
            }
            
        }
        if (palindrome)
            printf("word %d is a palindrome\n", i + 1);
        else
            printf("word %d is not a palindrome\n", i + 1);
    }
    
}//End main
