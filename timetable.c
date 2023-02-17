#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,num,result;
    printf("Which times-table would you like to display ?\n");
    scanf("%d",&num);

    i=1;
    while(i<=10)
    {
        result=num*i;
        printf("%d X %d = %d\n",num,i,result);
        i++;
    }

    return 0;
}
