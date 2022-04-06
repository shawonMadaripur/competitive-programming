#include<stdio.h>
int main()
{
    int n;

    printf("Enter a number = ");
    scanf("%d",&n);

    int rem = n / 2;

    printf("Modulus number is = %d\n",n-(rem*2));





    return 0;
}
