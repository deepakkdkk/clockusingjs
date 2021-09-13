#include<stdio.h>
int main(){
	int n;
	printf("Enter the year ");
	scanf("%d",&n);
	(n%100==0)?n%400==0?printf("Leap year"):printf("Not a leap year"):(n%4==0)?printf("Leap year"):printf("Not a leap year");
	printf("\nThis output belongs to your 2K20/B10/14 and Deepak");
	return 0;
}
