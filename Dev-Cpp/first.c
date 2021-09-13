#include<iostream>
#include<climit>
using namespace std;
int main(){
 int n;
 cin >>n;
 int num;
int  maxnum = INT_MIN;
int  minnum = INT_MAX;
 for(int i=0;i<n;i++){
 	cin>>num;
 	if(num>maxnum)
 	{maxnum=num;
 	cout<<num;
	 }
	 elseif(num<minnum){
	 minnum=num;
	 cout<<num;
	 	
	 }
 }
return 0;	
}

