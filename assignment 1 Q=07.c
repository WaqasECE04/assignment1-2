//waqas yousuf || ECE-22-04
//Question: Write a program that takes a and b coordinates as input and prints out the quadrant or axis where the point lies.
#include <stdio.h>

int main()
{
    int i;
    char name[2] = {'a', 'b'};
    float coordinate[2];
    for(i=0; i<=1; i++)
    {
        printf("Enter %c coordinate: ", name[i]);
        scanf("%f", &coordinate[i]);
    }
    
    if(coordinate[0]>0 && coordinate[1]>0)
    printf("(%.1f, %.1f) is in quadrant I", coordinate[0], coordinate[1]);
    
    else if(coordinate[0]<0 && coordinate[1]>0)
    printf("(%.1f, %.1f) is in quadrant II", coordinate[0], coordinate[1]);
    
    else if(coordinate[0]<0 && coordinate[1]<0)
    printf("(%.1f, %.1f) is in quadrant III", coordinate[0], coordinate[1]);
    
    else if(coordinate[0]>0 && coordinate[1]<0)
    printf("(%.1f, %.1f) is in quadrant IV", coordinate[0], coordinate[1]);
    
    else if(coordinate[0]==0 && coordinate[1]==0)
    printf("(%.1f, %.1f) is the origin", coordinate[0], coordinate[1]);
    
    else if(coordinate[0]==0)
    printf("(%.1f, %.1f) is on y-axis", coordinate[0], coordinate[1]);
    
    else if(coordinate[1]==0)
    printf("(%.1f, %.1f) is on x-axis", coordinate[0], coordinate[1]);
    
    printf("\n");
    
    
}
