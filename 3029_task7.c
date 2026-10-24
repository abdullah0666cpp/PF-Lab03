#include<stdio.h>
int main(){
	int subj1,subj2,subj3;
	printf("Enter your each subject marks out of a total of 100 marks\n");
	printf("Enter your subject 1 marks:");
	scanf("%d",&subj1);
	printf("Enter your subject 2 marks:");
	scanf("%d",&subj2);
	printf("Enter your subject 3 marks:");
	scanf("%d",&subj3);
	int tot=subj1+subj2+subj3;
	float avg=(float)tot/3;
	printf("Your Total is: %d/300\n",tot);
	printf("Your Average is: %.2f\n",avg);
	
	
	
	return 0;
}
