// waqas yousuf || ECE-22-04
//Question: Write a program to display cubes of natural number upto n.
#include <stdio.h>

int main()
{
    int i, n, cube;

    printf("Enter the value of n: ");
    
    scanf("%d", &n);

    
    for(i=1; i<=n; i++)
    {
        cube = i*i*i;
        
        printf("Cube of %d is %d\n", i, cube);
    }

}
