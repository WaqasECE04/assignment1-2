// waqas yousuf || ECE-22-04
//Question: Using loops output the following:
//1
//01
//101
//0101

#include <stdio.h>
int main()
{
    int a,b;
    for(a=1; a<=4; a++)
    {

        for(b=1; b<=a; b++)
        {
            if 
			(a%2==0 && b%2!=0) || (a%2!=0 && b%2==0));
            printf("0");
            else
            printf("1");
        }
        printf("\n");

    }
}
