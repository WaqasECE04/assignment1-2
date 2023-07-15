// waqas yousuf || ECE-22-04
//Question: A program that takes a number from 1-12 as input and prints the corresponding month name.

#include <stdio.h>

int main()
{
    int w;
    char month_name[12][4]= {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    printf("Enter your number (1-12): ");
    scanf("%d", &w);
    if(w>=0&&w<=12)
    printf("%s\n", month_name[w-1]);
    else
    printf("Invalid input!\n");
}
