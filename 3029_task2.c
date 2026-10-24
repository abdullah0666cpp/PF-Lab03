#include<stdio.h>
int main(){
	int num1, num2, a;
	printf("Enter the first integar:");
	scanf("%d",&num1);
	printf("Enter the second integar:");
	scanf("%d",&num2);
	printf("Now swapping integar values of num1 and num2\n");
	a=num1;
	num1=num2;
	num2=a;
	printf("First Integar is: %d\n",num1);
	printf("Second Integar is: %d\n",num2);
	return 0;
}
	
	
	
	
	

