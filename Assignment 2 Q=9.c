// waqas yousuf || ECE-22-04
//Question: Find sum of series: 1 2 3 4 5 .... n
#include <stdio.h>

int main()
{
    int i, n,sum;
	sum = 0;
    printf("Enter the value of n ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        sum=sum+ i;
    }
    printf("Sum = %d\n", sum);
}
