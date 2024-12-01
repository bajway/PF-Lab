/*Without using standard library functions (strlen, strcpy, etc.), write a program to:
Find the length of a string using pointers. Reverse a string using pointers. Concatenate two strings using pointers.*/

#include <stdio.h>
int strLenn(char *p)
{
    int count = 0;
    while(!(*p)=='\0')
    {
        count++;
        p++;
    }
    printf("\nThe length of string is %d ",count);
    return count;
}
//Function defination
void reverseStr(char *p, char *r, int no, char *s)
{
    int n = no / 2;
    char temp;
    for(int i = 1; i <= n; i++)
    {
        temp = *p;
        *p = *r;
        *r = temp;
        p++;
        r--;
    }

    for(int j = 0; j < no; j++)
    {
        printf(" %c", *s);
        s++;
    }
    
}

void concatenate(char *x, char *y)
{
    printf("\n");
    while (!(*x) == '\0')
    {
        printf("%c", *x);
        x++;
    }

    while (!(*y) == '\0')
    {
        printf("%c", *y);
        y++;
    }
}

int main() {
    char str[] = "kashif";
    char str2[] = "bajwa";
    char* p = str;
    char * t = str;
    char* f = str;
    char* x = str;
    char* y = str2;
    int ans = strLenn(p);  //Function calll
    concatenate(x, y);
    reverseStr(t, t+(ans-1), ans, f);
    return 0;
}//End main