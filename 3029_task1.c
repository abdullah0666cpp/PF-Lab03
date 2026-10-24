#include<stdio.h>
int main(){
	float hours, distance, avgspeed;
	printf("Total distance covered in km: ");
	scanf("%f",&distance);
	printf("Total time taken in hours: ");
	scanf("%f",&hours);
	printf("\tGiven:\nTotal distance covered by your vehicle is %.2fm in %.2fh time interval\n",distance,hours);
	avgspeed = distance/hours;
	printf("The average speed of your vehicle is: %.2f m/s",avgspeed);
	
	return 0;
	}
