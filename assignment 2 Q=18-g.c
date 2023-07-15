// waqas yousuf || ECE-22-04
//Question: Using loops output the following:
//   1
//  2 2
// 3 3 3
//4 4 4 4


        #include <stdio.h>

        int main()
{
        int a, b, c;
        for(a=1; a<=4; a++)
    {
        for(b=a; b<4; b++)
        printf(" ");

        for(c=1; c<=a; c++)
        {
            printf("%d ", a);
        }
         printf("\n");
    }
}
