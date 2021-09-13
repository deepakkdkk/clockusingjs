#include<iostream>
#include<string>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int ch[n];
	int i;
	for(i=0;i<n;i++){
		cin>>ch[i];
		
	}
	for(i=0;i<n;i++){
		cout<<ch[n-1-i];
	}
	
	return 0;
}
