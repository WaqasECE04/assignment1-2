// waqas yousuf || ECE-22-04
//Question: Display the series: 1 2 2 3 3 3 4 4 4 4 ..... n
#include <stdio.h>

int main()
{
    int i, x, number;
    printf("Enter n ");
    scanf("%d", &number);
    for(i=1; i<=number; i++)
    {
        for(x=1;x<=i;x++){
            printf("%d ", i);
        }
    }
    printf("\n");

}
