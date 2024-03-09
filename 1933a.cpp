#include<iostream>
using namespace std;
signed main(){
	int t;cin>>t;int n;int temp;
	int sum=0;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>temp;
			if(temp<0){
				temp=-temp;
			}
			sum+=temp;
		}
		cout<<sum<<endl;
		sum=0;
	}
}