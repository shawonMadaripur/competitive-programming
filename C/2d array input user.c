#include<stdio.h>
int main()
{
    int marks[4][10];
    int i,j;

    for(i=0; i<4; i++)
    {
        for(j=0; j<10; j++)
        {
            scanf("%d",&marks[i][j]);
        }
    }

    int row,col;

    for(row=0; row<3; row++)
    {
        for(col=0; col<10; col++)
        {
            marks[3][col] = marks[row][col]/4.0 + marks[row][col]/4.0 + marks[row][col]/2.0;
            printf("Roll no : %d   Total mark : %d\n",col+1,marks[3][col]);
        }
    }





    return 0;
}
