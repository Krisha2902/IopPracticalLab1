#include <stdio.h>

int main()
{
    float basic,Da,Ma,Hra,Gross,Pf,Nt;
    Ma=300;
    printf("please enter basic value =");
    scanf("%f",&basic);
    
    Da=basic*0.1;
    Hra=basic*0.075;
    Pf=basic*0.125;
    
    Gross=basic+Da+Hra+Ma;
    Nt=Gross-Pf;
    
    printf(" Da=%f\n Hra=%f\n Pf=%f\n Gross=%f\n Nt=%f\n",Da,Hra,Pf,Gross,Nt);

	return 0;
}