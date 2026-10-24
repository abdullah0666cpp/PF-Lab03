#include<stdio.h>
int main(){
	float value;
	printf("Enter the value between -1000 and 1000\n");
	scanf("%f",&value);
	if(-1000<value && value<1000)	
	{
	printf("The value you Entered: %.2f\n",value);
	int A =(int)value;
	printf("Converted Value: %d\n",A);
	printf("Difference between original and coverted value: %.2f",(value-A));
}   else
		printf("Requirement failed");	
	
	return 0;
}
