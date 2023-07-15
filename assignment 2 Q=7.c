// waqas yousuf || ECE-22-04
//Question: Write a C program to display n terms of odd natural numbers and their sum.
#include <stdio.h>

int main()
{
    //var and init
    int n, i, sum;
	sum=0;

    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        if(i%2==0)
        {
            n = n + 1;
        }
        else
        {
            printf("%d ", i);
            sum =sum +i;
        }
    }
    printf("Sum = %d\n", sum);
}
