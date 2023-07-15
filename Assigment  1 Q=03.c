//F waqas yousuf || ECE-22-04
//Question: Adding the digits of a 4-digit number.

#include <stdio.h>

int main()
{
    int inputnumber, number, sum = 0, digit;
    printf("Enter a 4-digit number: ");
    scanf("%d", &inputnumber);
    number = inputnumber;
    while(number>0)
    {
        digit = number%10;
        sum = sum + digit;
        number = number/10;
    }
    
    printf("sum = %d\n", sum);
    
    return 0;
}
