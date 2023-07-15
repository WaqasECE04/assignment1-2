// waqas yousuf || ECE-22-04
//Question: Write a prog to calculate percentage and grade of a student by accepting marks 
//in 5 subjects as input. Asssume the maximum marks to be 500.

#include <stdio.h>

int main()
{
    int marks[4], total_marks, y;
    float percentage;
    for(y=0; y<5; y++)
    {
        printf("Enter marks in subject %d: ", y+1);
        scanf("%d", &marks[y]);
        total_marks = total_marks + marks[y];           //Adding the marks
}
    percentage = (total_marks/500.0)*10
    if(percentage>100)
    printf("Enter correct marks!\n");
    else if(percentage<=100&&percentage>=90)
    printf("Grade A\nPercentage: %.1f\n", percentage);
    else if(percentage>=80)
    printf("Grade B\nPercentage: %.1f\n", percentage);
    else if(percentage>=70)
    printf("Grade C\nPercentage: %.1f\n", percentage);
    else if(percentage>=60)
    printf("Grade D\nPercentage: %.1f\n", percentage);
    else if(percentage>=50)
    printf("Grade E\nPercentage: %.1f\n", percentage);
    else
    printf("Failed!\nPercentage: %.1f\n", percentage);
    
    return 0;
}
