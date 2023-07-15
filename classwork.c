// waqas yousuf || ECE-22-04
//Question: Search for a number in an array. Also find minimum and maximum of the numbers in the array.
#include <stdio.h>
int main()
{
    int number[10] = {64, 71, 19, 25, 23, 93, 42, 78, 88, 44};
    int minimum = number[0];
    int maximum = number[0];
    int i, inputnumber, flag = 0;

    //input
    printf("Enter the number you want to search ");
    scanf("%d", &inputnumber);
    for(i=0; i<10; i++)
    {
        if(minimum>number[i])          //minimum
        minimum = number[i];
        if(maximum<number[i])          //maximum
        maximum = number[i];
        if(number[i]==inputnumber)     //search
        {
            printf("The location of %d is %d.\n", inputnumber, i+1);        //will print multiple locations if a number repeats in an array like 3 in our case.
            flag = 1;
        }
    }
    if(flag==0)
    printf("Your number is not present in the array.\n");
    printf("Min = %d\nMax = %d\n", minimum, maximum);

}
