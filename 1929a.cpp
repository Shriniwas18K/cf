#include<iostream>
using namespace std;
#define int long long
int a[100];
int n=100;
int maxindx=0;
int minindx=0;
int beauty=0;
int findmax(int n){
	int maxindx=0;
	for(int i=0;i<n;i++){
		if(a[maxindx]<a[i]){
			maxindx=i;
		}
	}
	return maxindx;
}
int findmin(int n){
	int minindx=0;
	for(int i=0;i<n;i++){
		if(a[minindx]>a[i]){
			minindx=i;
		}
	}
	return minindx;
}
signed main(){
	int t;
 cin>>t;
	while(t--){
  cin>>n;
		for(int i=0;i<n;i++){
   cin>>a[i];
		}
		maxindx=findmax(n);
		minindx=findmin(n);
		cout<<a[maxindx]-a[minindx]<<endl;
	}
}
