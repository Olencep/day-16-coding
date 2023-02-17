#include <stdio.h>
#include <stdlib.h>

int main()
{
    int oddsum=0,evensum=0,n,i,k;

    printf("Enter the max_number: ");
    scanf("%d",&n);
    printf("Enter the k value: ");
    scanf("%d",&k);
    i=1;
    while(i<=n)
    {
        if(i%k==0)
        {
            printf("%d\n",i);

            if(i%2==0)
            evensum=evensum+i;
            else
            oddsum=oddsum+i;
        }
     i++;
    }
    printf("Even sum = %d \n Odd sum = %d",evensum,oddsum);

    return 0;
}
