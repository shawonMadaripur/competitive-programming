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
        printf("Roll = %d     mark = %d\n",i+1,result[i]);
    }


    int query[101] = { [0 ... 100] = -1 };
    for(int i=0;i<n;i++){
            if(query[result[i]]==-1) query[result[i]]=0;
        query[result[i]]++;
    }

    printf("\nFinal Result\n");
    for(int i=0;i<101;i++){
            if(query[i]>-1){
                printf("%d has achieve %d Person\n",i,query[i]);
            }
    }


    return 0;
}
