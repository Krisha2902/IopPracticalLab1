#include <stdio.h>

int main()
{
    int i,p,r,n;
    printf("principle amount is=");
    scanf("%d",&p);
    printf("rate of interest=");
    scanf("%d",&r);
    printf("number of year=");
    scanf("%d",&n);
    
    i=p*r*n/100;
    printf("simple interest=%d",i);

    return 0;
}