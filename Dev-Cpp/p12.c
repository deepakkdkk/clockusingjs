#include<stdio.h>
int main(){
	int n1,n2,n3,max,min;
	printf("Enter three numbers\n");
	scanf("%d\n%d\n%d",&n1,&n2,&n3);
	max=n1>n2?n1>n3?n1:n3:n2>n3?n2:n3;
	min=n1<n2?n1<n3?n1:n3:n2<n3?n2:n3;
	printf("greatest number is %d",max);
	printf("\nsmallest number is %d\n",min);
	printf("This output belongs to your 2K20/B10/14 and Deepak");
	return 0;
}
