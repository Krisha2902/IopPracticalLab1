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

    return 0;
}