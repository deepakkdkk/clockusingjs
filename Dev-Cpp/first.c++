#include<iostream>
#include<climits>
using namespace std;
int main() {
	int n;
	cin >>n;
	int num;
	int  maxnum = INT_MIN;
	int  minnum = INT_MAX;
	for(int i=0; i<n; i++) {
		cin>>num;
		if(num>maxnum) {
			maxnum=num;

		}
		if(num<minnum) {
			minnum=num;


		}

	}
	cout<<"maximum"<<maxnum<<endl;
	cout<<"minnum"<<minnum<<endl;
	return 0;
}

