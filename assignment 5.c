#include <stdio.h>

int main()
{
    int a,b,c;
    
    printf("the number a is=");
    scanf("%d",&a);
    printf("the number b is=");
    scanf("%d",&b);
    
    c=a;
    a=b;
    b=c;
   
    
    printf("a=%d b=%d",a,b);

    return 0;
}
