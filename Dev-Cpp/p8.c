#include<stdio.h>
#include<math.h>
int main(){
	int i,n,flag=1;
	printf("Enter a number ");
	scanf("%d",&n);
	for(i=2;i<=sqrt(n);i++){
		n%i==0?flag=0,break;
		}
	}
	if(n<=1){
		flag=0;
	}
	else if(n==2){
		flag=1;
	}
	flag==1? printf("%d is a prime number ",n):printf("%d is not a prime number ",n);
	printf("\nThis output belongs to your 2K20/B10/14 and Deepak ");
		return 0;
}
