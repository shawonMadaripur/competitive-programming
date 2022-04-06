#include<stdio.h>
int main()
{
    int n;
    printf("how many student calculate = ");
    scanf("%d",&n);


    int ft_mark[n],st_mark[n],final_mark[n],i;


    printf("Frist semester exam.\n");
    for(i=0; i<n; i++)
    {
        printf("Roll = %d     mark = ",i+1);
        scanf("%d",&ft_mark[i]);
    }


    printf("second semester exam.\n");
    for(i=0; i<n; i++)
    {
        printf("Roll = %d      mark = ",i+1);
        scanf("%d",&st_mark[i]);
    }


    printf("Final semester exam.\n");
    for(i=0; i<n; i++)
    {
        printf("Roll = %d      mark = ",i+1);
        scanf("%d",&final_mark[i]);
    }

    double total_mark[n];
    for(i=0; i<n; i++)
    {
        total_mark[i] = (ft_mark[i]*0.25) + (st_mark[i]*0.25) + (final_mark[i]*0.50);
    }

    int result[n];
    for(i=0; i<n; i++)
    {
        result[i] = round(total_mark[i]);
    }


    printf("final mark exam is.\n");
    for(i=0; i<n; i++)
    {
        printf("Roll = %d     mark = %d.\n",i+1,result[i]);
    }

    int count[n]={0},j,result_mark[n]={1};
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(result_mark[i] == result[j])
            {
                count[i]++;
            }
        }
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(result_mark[i]  == result[j])
            {
                printf("%d has appeared %d times in the array",result_mark[i],count[i]);
            }
        }
    }



    return 0;
}
