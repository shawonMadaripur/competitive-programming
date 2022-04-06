#include<stdio.h>
int main()
{
    int n,i;
    int ara[20];

    printf("Enter n = ");
    scanf("%d",&n);

    for(i=0; i<=n; i++)
    {
        scanf("%d",&ara[i]);
        if(ara[i]>99 && ara[i]<9)
        {
            printf("sorry this numer is not correct.\n");
            continue;
        }
    }
    for(i=0; i<=n; i++)
    {
         if(ara[i]>99 && ara[i]<9)
        {
            continue;
        }
        if(ara[i] % 11 == 0)
        {
            continue;
        }
        printf("%d\n",ara[i]);
    }



    return 0;
}
