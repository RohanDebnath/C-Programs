// Coordinate Problem
#include<stdio.h>
void coordinate(int x,int y)
{
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


int main()
{
int x1,x2,y1,y2;
printf("Enter your X1 coordinate\n");
scanf("%d",&x1);
printf("Enter your x2 coordinate\n");
scanf("%d",&x2);

return 0;
}