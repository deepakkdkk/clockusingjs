#include<stdio.h>
int main(){
	int n,i,j,k;
	printf("Enter the number of rows ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		k=1;
		for(j=1;j<=2*n-1;j++){
			(j>=n-i+1 && j<=n-1+i && k)?printf("*"),k=0:printf(" "),k=1;
			}
		printf("\n");
	}
	printf("This output belongs to your 2K20/B10/14 and Deepak ");
	return 0;
}
