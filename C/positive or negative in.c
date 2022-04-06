#include<stdio.h>
int main()
{
    int n;

    printf("Enter a number = ");
    scanf("%d",&n);

    if(n > 0)
    {
        printf("the number is positive.");
    }
    else if(n == 0)
    {
        printf("The number is zero.");

    }
    else
    {
        printf("The is negative.");
    }




    return 0;
}
