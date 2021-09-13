
#include<stdio.h>
int main(){
	int n1,n2,n3,max;
	printf("Enter three numbers\n");
	scanf("%d\n%d\n%d",&n1,&n2,&n3);
	max=n1>n2?n1>n3?n1:n3:n2>n3?n2:n3;
	
	printf("greatest number is %d",max);
	
	return 0;
}

