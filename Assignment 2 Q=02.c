// waqas yousuf|| ECE-22-04
//Question: Write a C program to compute the sum of the first 10 natural numbers.
#include <stdio.h>

int main()
{
    int i, sum;
	sum = 0;

    for(i=1; i<=10; i++)
    {
        sum = sum + i;
    }

    printf("sum = %d\n", sum);
}
