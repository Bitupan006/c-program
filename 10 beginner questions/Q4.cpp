#include<stdio.h>
int main(){
	int a, b , x = 0;
	printf("Enter the value of a : ");
	scanf("%d",&a);
	printf("Enter the value of b : ");
	scanf("%d",&b);
	printf("Before swapping");
	printf("\nThe value of a and b is %d and %d", a,b);
	
	x = a;
	
	a = b;
	
	b = x;
	
	printf("\nAfter swapping");
	printf("\nThe value of a and b is %d and %d", a,b);
		
	
}
