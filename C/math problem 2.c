#include<stdio.h>
int main()
{
    int a1,a2,b1,b2,c1,c2;

    printf("enter a1 = ");
    scanf("%d",&a1);


    printf("enter b1 = ");
    scanf("%d",&b1);


    printf("enter a2 = ");
    scanf("%d",&a2);


    printf("enter b2 = ");
    scanf("%d",&b2);


    printf("enter c1 = ");
    scanf("%d",&c1);


    printf("enter c2 = ");
    scanf("%d",&c2);

    int x = (b2*c1-b1*c2) / (a1*b2 - a2*b1);
    int y = (a1*c2 - a2*c1) / (a1*b2 - a2*b1);

    printf("x = %d\n",x);
    printf("y = %d\n",y);










    return 0;
}
