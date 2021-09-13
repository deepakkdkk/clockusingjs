#include<stdio.h>
int main(){
	int n,r,rev=0,s,count=0,tmp;
	printf("Enter the number ");
	scanf("%d",&n);
	
	tmp=n;
	while(n!=0){
		r=n%10;
		rev=rev*10+r;
		n=n/10;
		count++;
	}
	(rev==tmp)?(count%2==0)?printf("%d is an Even-length palindrome",tmp):printf("%d is an odd-length palindrome",tmp):printf("%d is not palindrome",tmp);
	printf("\nThis output belongs to your 2K20/B10/14 and Deepak");
	return 0;
}
