// waqas yousuf || ECE-22-04
//Question: Display series: 1 2 3 4 5 .... n
#include <stdio.h>
int main()
{
    int i, n;

    printf("Enter n: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        printf("%d ", i);
    }
    printf("\n");

}
