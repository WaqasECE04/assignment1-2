// waqas yousuf || ECE-22-04
//Question: Find the factorial of a number n taken as input.
// let factorial be x
#include <stdio.h>

int main()
{
    int i, n,x;
	x = 1;
    printf("Enter n ");
    scanf("%d", &n);
    for(i=n; i>1; i--)
    {
        x=x*i;
    }
    printf("Product = %d\n",x);

}
