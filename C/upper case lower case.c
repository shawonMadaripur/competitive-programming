#include<stdio.h>
int main()
{
    char ch;

    printf("Enter any word = ");
    scanf("%c",&ch);

    if(ch >= 'a' && ch <= 'z')
    {
        printf("The char is lower case.");
    }
    else if(ch >= 'A' && ch <= 'Z')
    {
        printf("The char is upper case.");
    }



    return 0;
}
