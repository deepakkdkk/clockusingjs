#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int add(int a,int b){
	int c= a+b;
	return c;
}
	int sub(int a,int b){
		int c=a-b;
		return c;
	}
	int prod(int a, int b){
		int c=a*b;
		return c;
	}
	int divide(int a,int b){
	 int c=a/b;
		return c;
	}
	int rem(int a,int b){
		int c=a%b;
		return c;
	}
	int power(int a,int b){
		int c=pow(a,b);
		return c;
	}
int main(){
	int n1,n2,res;
	char ch;
	printf("Enter the numbers");
	scanf("%d%d",&n1,&n2);
	do{ 
	printf("enter the choice");
	scanf("%c",&ch);
		switch(ch){
			case 'a': res=add(n1,n2);
			         printf("%d",res);
			          break;
			case 'b': res=sub(n1,n2);
			          printf("%d",res);
			          break;
			case 'c': res=prod(n1,n2);
			          printf("%d",res);
			          break;          
		    case 'd': res=divide(n1,n2);
			          printf("%d",res);
		              break;
		    case 'e': res=rem(n1,n2);
			          printf("%d",res);
		              break;
		    case 'f': res=power(n1,n2);
			          printf("%d",res);
		              break;
		    case 'g': exit(0);
		              break;
		    default : printf("wrong entry");
		              break;
		}
	}while(ch!='g');
	return 0;
}
