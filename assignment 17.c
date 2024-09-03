#include <stdio.h>
 int main()
{
    int A = 10, B = 22, C = 9;
    printf("The numbers A, B and C are: %d, %d, %d\n", A, B,
           C);

    if (A >= B) {
        if (A >= C)
            printf("%d is the largest number.", A);
        else
            printf("%d is the largest number.", C);
    }
    else {
        if (B >= C)
            printf("%d is the largest number.", B);
        else
            printf("%d is the largest number.", C);
    }

    return 0;
}