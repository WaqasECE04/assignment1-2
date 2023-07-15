// waqas yousuf || ECE-22-04
//Question: Write a program in C to display the multiplication table for a number n taken as input.
#include <stdio.h>

int main()
{
    int n, i, table;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(i=1; i<=10; i++)
    {
        table = n * i;
        printf("%d x %d = %d\n", n, i, table);
    }
	}