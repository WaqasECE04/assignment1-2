// waqas yousuf || ECE-22-04
//Question: Display the series: 2 4 16 256 65536 ...
#include <stdio.h>
int main()
{
    int i, n;
    double number = 2;
    printf("Enter the value of n");
    scanf("%d", &n);
    for(i=1; i<n; i++)
    {
        printf("%.0f ", number);
        number=number*number;
    }
    printf("\n");
}
