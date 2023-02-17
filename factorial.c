#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i,result=1;
    printf("Enter n value: ");
    scanf("%d",&num);
    i=num;
    while(i>=1)
    {
        result=result*i;
        i--;
    }
    printf("Factorial of %d: %d",num,result);
    return 0;
}
