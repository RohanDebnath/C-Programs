// Coordinate Problem 
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter your X coordinate\n");
    scanf("%d",&x);
    printf("Enter your Y coordinate\n");
    scanf("%d",&y);

    if((x>0)&&(y>0))
    {
        printf("\n The Coordinate belongs to the first quadrant ");
    }
    else if ((x<0)&&(y>0))
    {
        printf(" The coordinates belong to the second quadrant");
    }
    else if((x<0)&&(y<0))
    {
        printf("The coordinates belong to the third Quadrant ");
    }
    else if( (x>0)&& (y<0))
    {
        printf("The coordinates belong to the Fourth Quadrants");
    }
    
}