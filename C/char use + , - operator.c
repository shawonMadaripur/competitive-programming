#include<stdio.h>
int main()
{
    int num1,num2;
    char sign;

    printf("please enter frist number = ");
    scanf("%d",&num1);

    printf("please enter second number = ");
    scanf("%d",&num2);

    sign = '+';
    printf("%d %c %d = %d\n",num1,sign,num2,num1+num2);

    sign = '-';
    printf("%d %c %d = %d\n",num1,sign,num2,num1-num2);

    sign = '*';
    printf("%d %c %d = %d\n",num1,sign,num2,num1*num2);

    sign = '/';
    printf("%d %c %d = %d\n",num1,sign,num2,num1/num2);





    return 0;
}
