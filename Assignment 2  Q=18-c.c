// waqas yousuf || ECE-22-04
//Question: Using loops output the following:
//1
//12
//123
//1234

#include <stdio.h>

int main()
{
    int a, b;
    for(a=1; a<=4; a++)
    {
        for(b=1; b<=a; b++)
        {
            printf("%d", b);
        }
        printf("\n");
    }
}
