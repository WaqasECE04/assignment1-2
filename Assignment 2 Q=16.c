// waqas yousuf || ECE-22-04
//Question: Display the Fibonacci series: 1 1 2 3 5 8 13 21 ....... n
#include <stdio.h>
int main()
{
    int inp_number, current_number, prev_number, p_prev_number;
    prev_number = p_prev_number = 1;
    current_number = 0;

    //inp
    printf("Enter the value of n ");
    scanf("%d", &inp_number);
    while(current_number<=inp_number)
    {
         if(current_number==0)
         {
             printf("%d ", prev_number);                  //>1
             current_number = prev_number;                   // 1
         }
         else
         {
             printf("%d ", current_number);              
             current_number = prev_number + p_prev_number;     
             p_prev_number = prev_number;                    
             prev_number = current_number;                   

         }

    }
}
