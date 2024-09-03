#include<stdio.h>

int main()
{
    int h,m,s, totalsecond;
    printf("hour= ",h);
    scanf("%d",&h);
    printf("minute= ",m);
    scanf("%d",&m);
    printf("second= ",s);
    scanf("%d",&s);
    totalsecond = h*3600 + m*60+s;
    printf("total second is= %d ", totalsecond);
    
    return 0;
}