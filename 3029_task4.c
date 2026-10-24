#include<stdio.h>
int main(){
	int pennies=368;
	int quarter,dime,nickel;
	printf("\tCOVERSION OF PENNIES\n");
	quarter=pennies/25;
	pennies=pennies%25;
	dime=pennies/10;
	pennies=pennies%10;
	nickel=pennies/5;
	pennies=pennies%5;
	printf("\n\tTotal Quarter's: %d\n",quarter);
	printf("\tTotal Dime's: %d\n",dime);
	printf("\tTotal Nickel's: %d\n",nickel);
	printf("\tTotal Pennies: %d\n",pennies);
	return 0;
	
}
