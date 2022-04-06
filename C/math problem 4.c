#include<stdio.h>
int main()
{
    int loan_amount,interest_rate,number_of_year,total_amount,monthly_amount;

    printf("Enter loan amount = ");
    scanf("%d",&loan_amount);

    printf("What is the interest rate = ");
    scanf("%d",&interest_rate);

    printf("Enter number of year = ");
    scanf("%d",&number_of_year);

    total_amount = loan_amount + (loan_amount * 5 * interest_rate/100);
    monthly_amount = total_amount /(number_of_year*12);

    printf("Total amount pay = %d\n",total_amount);
    printf("monthly amount pay = %d\n",monthly_amount);


    return 0;
}
