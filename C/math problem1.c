#include<stdio.h>
int main()
{
    double n,m,x,y;

    printf("Please enter x + y = ");
    scanf("%lf",&n);

    printf("Please enter x - y = ");
    scanf("%lf",&m);

    x = (n + m) / 2;
    y = (n - m) / 2;

    printf("x = %.2lf\n",x);
    printf("y = %.2lf\n",y);



    return 0;
}
