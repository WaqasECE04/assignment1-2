//waqas yousuf || ECE-22-04
//Question: Using loops output the following:
//   1
//  21
// 321
//4321

#include <stdio.h>

int main()
{
    int i, x, y;
    for(i=1; i<=4; i++)
    {
        for(x=i; x<4; x++)
        printf(" ");

        for(y=i; y>=1; y--)
        printf("%d", y);

        printf("\n");
    }
}