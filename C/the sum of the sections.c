#include<stdio.h>
int main()
{
    int n;

    printf("Enter the last number = ");
    scanf("%d",&n);

    int sum = (n*(n+1)) / 2;

    printf("The sum is = %d\n",sum);

    return 0;
}
