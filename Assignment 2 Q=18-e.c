// waqas yousuf || ECE-22-04
//Question: Using loops output the following:
//   1
//  212
// 32123
//4321234

#include <stdio.h>
int main()
{
    int i,j,k,l;
    for(i=1; i<=4; i++)
    {
        for(j=i; j<4; j++)
        printf(" ");

        for(k=i; k>=1; k--)
        printf("%d", k);

        for(l=2; l<=i; l++)
        printf("%d", l);

        printf("\n");
    }
}
