// waqas yousuf || ECE-22-04
//Question: Using loops output the following:
//1
//22
//333
//4444

#include <stdio.h>

int main()
{
    int i, j;
    for(i=1; i<=4; i++)
    {
        for(j=1; j<=i; j++)
        printf("%d", i);
        printf("\n");
    }
}
