#include<bits/stdc++.h>
#include<iostream>
#include<climits>
using namespace std;

int main() {
	// your code goes here
	long long int t;
	cin>>t;
	while(t--){
	    long long int n;
	    cin>>n;
	    long long int arr[n];
	    long long int max=INT_MIN;
	    long long int min=INT_MAX;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        if(arr[i]>max){
	            max=arr[i];
	        }
	        if(arr[i]<min){
	            min=arr[i];
	        }
	        
	    }
	    long long int ans=max-min;
	    ans*=2;
	    cout<<ans<<endl;
	}
	return 0;
}
