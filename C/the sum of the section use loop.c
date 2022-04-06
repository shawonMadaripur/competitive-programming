#include<stdio.h>
int main()
{
    int n,i;

    printf("Enter the last number = ");
    scanf("%d",&n);

    int sum = 0;

    for(i=1; i<=n; i=i+2)
    {
        sum = sum + i;
    }
    printf("sum is = %d\n",sum);


    return 0;
}
