// waqas yousuf || ECE-22-04
//Question: Find sum of series: 1 3 5 7 .... n

#include <stdio.h>
int main()
{
    int i, n,sum;
	 sum=0;
    printf("Enter n: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        if(i%2!=0)
        sum=sum+i;
    }
    printf("Sum = %d\n", sum);
}
