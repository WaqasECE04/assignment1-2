//Fri, Jul 14 || waqas yousuf || ECE-22-04
//Question: Printing a 4-digit number in reverse.

#include <stdio.h>

int main()
{
    //variables and initialization
    int number, inpnumber, revnumber = 0, digit;
    
    //input
    printf("Enter a 4-digit number: ");
    scanf("%d", &inpnumber);
    
    //calculations
    number = inpnumber;
    while(number>0)
    {
        digit = number%10;
        revnumber = (revnumber * 10) + digit;
        number = number/10;
    }
    
    //output
    printf("Your number in reverse: %d\n", revnumber);
    if(inpnumber==revnumber)
    printf("Your number is a palindrome.");
    
    return 0;
}
