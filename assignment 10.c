#include<stdio.h>

int main()
{
    int m,p,c,e,cm;
    printf("maths=",m);
    scanf("%d",&m);
    printf("physics=",p);
    scanf("%d",&p);
    printf("chemistry=",c);
    scanf("%d",&c);
    printf("Mark in entrance examination=",e);
    scanf("%d",&e);
    cm=m/2+p/2+c/2+e;
    printf("cm=",cm);
    return 0;
}    