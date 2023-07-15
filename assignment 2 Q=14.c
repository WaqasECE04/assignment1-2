// waqas yousuf || ECE-22-04

//Question: Display the series: 2 4 8 16 32 64 128 .......

#include <stdio.h>
int main()
{
    int i,inp_number,n;
	 n=2;

    printf("Enter number ");
    scanf("%d", &inp_number);
    for(i=0; i<inp_number; i++)
    {
        printf("%d ", n);
        n=n*2;
    }
    printf("\n");
}
