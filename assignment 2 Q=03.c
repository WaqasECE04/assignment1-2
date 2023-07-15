// waqas yousuf || ECE-22-04
//Question: Display n natural numbers and their sum.
#include <stdio.h>

int main()
{
    
    int i, sum, b;


    sum = 0;

    //inp
    printf("Enter the value of b: ");
    scanf("%d", &b);


    for(i=1; i<=b; i++)
    {
        printf("%d ", i);
        sum = sum + i;
    }
    printf("\nsum = %d\n", sum);
    
}
