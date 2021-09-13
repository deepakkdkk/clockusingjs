#include<stdio.h>
int main(){
	int n,i;
	int count=0;
	scanf("%d",&n);
	int a[n],num;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		
	}
	printf("Enter the number");
	scanf("%d",&num);
	for(i=0;i<n;i++){
		if(a[i]==num){
			count++;
			}
		}
		if(count==1){
			printf("Number is present \n");
		}else{
			printf("Number is not present\n");
		}
	return 0;
}
