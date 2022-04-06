#include<stdio.h>
int main()
{
    double celsious,farenheit;

    printf("Enter celsious = ");
    scanf("%lf",&celsious);

    farenheit = (celsious * 1.8) + 32;

    printf("farenheit is = %.2lf\n",farenheit);





    return 0;
}
