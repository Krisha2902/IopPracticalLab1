#include <stdio.h>

int main()
{
    char a;
    printf("please type the letter=");
    scanf("%c",&a);
    
    if(a>=65 && a<=90)
    {
        printf("the letter is capital");
    }
    else if(a>=97 && a<=122)
    {
        printf("the letter is small");
    }
    else if(a>=48 && a<=57)
    {
        printf("the letter is digit");
    }
    else
    {
        printf("letter is special character");
    }
    

    return 0;
}