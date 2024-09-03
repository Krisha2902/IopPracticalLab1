
#include <stdio.h>

int main()
{
    int a,b;
    
    printf("the number a is=");
    scanf("%d",&a);
    printf("the number b is=");
    scanf("%d",&b);
    
    a=a+b;
    b=a-b;
    a=b-a;
    printf("the value of a is %d",a);
    printf("the value of b is %d",b);
    return 0;
}