// waqas yousuf || ECE-22-04
//Question: Display the series: 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 ..... (n times)
#include <stdio.h>

int main()
{
    //var
    int i, j, w;

    //inp
    printf("Enter the value of w ");
    
    scanf("%d", &w);

    //calc and output
    for(i=1; i<=w; i++)
    {
        for(j=1; j<=5; j++)
        {
            printf("%d ", j);
        }
    }
    printf("\n");
    
    return 0;
}
