// waqas yousuf || ECE-22-13
//Question: Find product of series: 1 2 3 4 5 .... n
#include <stdio.h>
int main()
{
    //var and init
    int i, n,product;
	 product = 1;
    printf("Enter n: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        product=product*i;
    }
    printf("Product = %d\n", product);
}
