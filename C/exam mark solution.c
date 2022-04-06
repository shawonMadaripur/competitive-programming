#include<stdio.h>
int main()
{
    int ft_mark[10]={83,86,97,95,93,95,93,95,86,52};
    int st_mark[10]={86,97,45,83,44,34,98,34,65,87};
    int final_mark[10]={84,48,94,54,65,34,54,67,78,45};

    double total_mark[10];
    int i;

    for(i=0; i<10; i++)
    {
        total_mark[i] = (ft_mark[i]*(25/100.0)) + (st_mark[i]*(25/100.0)) + (final_mark[i]*(50/100.0));
    }

    for(i=0; i<10; i++)
    {
        printf("%.2lf\n",total_mark[i]);
    }


    return 0;
}
