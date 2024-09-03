#include <stdio.h>

int main()
{
    float f,c;
    printf("enter the temperature value in centigrade =");
    scanf("%f",&c);
    
    f=1.8*c+32;
    printf("f=%f",f);

    return 0;
}

