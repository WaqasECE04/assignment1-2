// waqas yousuf || ECE-22-04
//Question: Write a program in C to read 10 numbers from the keyboard and find their sum and average. ( USE ARRAY )

#include <stdio.h>

int main()
{
    //var & init
    int number[9], i, sum = 0;
    float average;

    //inp
    for(i=0; i<10; i++)
    {
        printf("Enter number-%d: ", i+1);
        
        scanf("%d", &number[i]);
    }

    //calc
    for(i=0; i<10; i++)
    {
        sum = sum + number[i];
    }
    average = sum/10.0;

    //otp

    printf("Sum = %d\nAverage = %.2f\n", sum, average);
    return 0;
}
