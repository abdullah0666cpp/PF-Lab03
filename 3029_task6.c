#include<stdio.h>
int main(){
	int a,b;
	printf("Enter the first positive integar:");
	scanf("%d",&a);
	printf("Enter the second positive integar:");
	scanf("%d",&b);
	float first,second,third;
	first=a/b;
	/* first:when we take two integar values and divide them it will give us
	an integar value and then that integar value is stored in float so
	it converts into float and give us 6 zeros.*/ 
	second=(float)a/b;
	/*second:when we typecaste float so the compiler first turns A into float
	and then divides with B*/
	third=(float)(a/b);
	/*third:when we typecaste float and a/b both in different parentheses 
	the compiler first divides the integar parentheses and then coverts into float*/
	printf("First: %f\n",first);
	printf("Second: %f\n",second);
	printf("Third: %f\n",third);
	
	return 0;
}
