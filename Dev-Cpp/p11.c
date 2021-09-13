#include<stdio.h>
int main(){
	int n,r,rev=0;
	printf("Enter the number ");
	scanf("%d",&n);
	while(n!=0){
		r=n%10;
		rev=rev*10+r;
		n=n/10;
		
	}
	printf("%d",rev);
	printf("\nThis output belongs to your 2K20/B10/14 and Deepak ");
	
	return 0;
}
