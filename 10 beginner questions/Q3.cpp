#include<stdio.h>
#include<math.h>
int main()
{
	float radius;
	printf("Enter the radius : ");
	scanf("%f",&radius);//this is the declaration of radius
	float area = 3.14*radius*radius;// this is the logic for area
	printf("The area of the circle with radius %.3f is : %.3f ", radius ,area);
}
