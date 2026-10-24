#include<stdio.h>
int main(){
	float tax,salary,tot,Tax;
	printf("Enter Salary:");
	scanf("%f",&salary);
	printf("Enter Tax in %%:");
	scanf("%f",&tax);
	printf("Calculations:\nSalary: %.2f\nTax: %.0f%%\n",salary,tax);
	Tax = salary*tax/100;
	tot = salary-Tax;
	printf("Your Salary after Tax deduction is: %.2f",tot);	
	return 0;
	
}
