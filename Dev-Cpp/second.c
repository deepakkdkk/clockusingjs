#include<stdio.h>
int main(){
	int n1,n2;
	int s=0;
	float avg=0.0;
	printf("enter the first number ");
	scanf("%d",&n1);
	printf("enter the second number ");
	scanf("%d",&n2);
	s=n1+n2;
	avg=(n1+n2)/2.0;
	printf("sum is %d \n ",s);
	printf("average is %.2f \n ",avg);
	printf("This output belongs to your 2K20/B10/14 and Deepak ");
	return 0;
}
