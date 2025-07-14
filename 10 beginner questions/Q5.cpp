#include<stdio.h>
int main(){
	int a,b;
	printf("Enter a : ");
	scanf("%d",&a);
	printf("Enter b : ");
	scanf("%d",&b);
	if(a==b){
		printf("The numbers are equal");
	}
	else if(a>b){
		printf("%d is greatest",a);
	}
	else if(b>a){
		printf("%d is greatest",b);
	}
}
