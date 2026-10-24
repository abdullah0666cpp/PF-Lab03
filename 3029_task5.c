#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c,x1,x2,z;
	printf("Enter the value of A:");
	scanf("%f",&a);
	printf("Enter the value of B:");
	scanf("%f",&b);
	printf("Enter the value of C:");
	scanf("%f",&c);
	printf("A=%.2f\n",a);
	printf("B=%.2f\n",b);
	printf("C=%.2f\n",c);
		
	if(a==0)
	{ 
	printf("Not a Quadratic Equation");
	}
	else
	{
	z=b*b-4*a*c;
	if(z>=0)
	{	
	x1 = (-b+sqrt(z))/(2*a);
	x2 = (-b-sqrt(z))/(2*a);
	printf("X1 = %.2f\n",x1);
	printf("X2 = %.2f\n",x2);
}
 else {
 	printf("Not a Quadratic equation");
 }
}	
	return 0;
}
