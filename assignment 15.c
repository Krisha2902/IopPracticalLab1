#include <stdio.h>

int main()
{
float m, p, c, e, co, total, per;
    m=86;
    p=77;
    c=80;
    e=56;
    co=70;
    
    total=m+p+c+e+co;
    per=total/500*100;
    printf("total=%f per=%f",total,per);
    if(per >= 90)
    {
        printf("grad A");
    }
    else if(per >= 80)
    {
        printf("grad b");
    }
    else if(per >= 70)
    {
        printf("grad c");
    }
    else if(per >= 60)
    {
        printf("grad d");
    }
    return 0;
}