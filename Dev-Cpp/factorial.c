#include<stdio.h>
long int fact(n){
	if(n>1){
	return (n*fact(n-1));}
	else {
	return 1;}
	}
int main(){
	int n;
	printf("Enter the number\n");
	scanf("%d",&n);
	printf("\nFactorial of given number is :\n");
	printf("%d",fact(n));
	printf("\nThis output belongs to Deepak and 2K20/B10/14");
	return 0;
}
