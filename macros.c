#include<stdio.h>
#define PI 3.14159
int main(){
int r1,r2,height;
printf("\nEnter the radius of the circle :");
scanf("%d",&r1);
printf("\nEnter the radius of the cylinder :");
scanf("%d",&r2);
printf("\nEnter the height of the cylinder :");
scanf("%d",&height);
float circlearea=PI*r1*r1;
printf("\nThe area of the circle is %f",circlearea);
float  cylinderarea=2*PI*r2*height + 2*PI*r2*r2;
printf("\nThe area of the cylinder is %f",cylinderarea);
return 0;
}
