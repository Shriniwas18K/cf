#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int minimum(int a,int b){
	if(a>b){
		return b;
	}else{
		return a;
	}
}
signed main(){
	vector<int> v;
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int score=0;
		int temp;
		for(int i=0;i<2*n;i++){
			cin>>temp;
			v.push_back(temp);
		}
		sort(v.begin(),v.end());
		for(auto c=v.begin();c!=v.end();c=c+2){
			score+=minimum(*c,*(c+1));
		}
		cout<<score<<endl;
		score=0;
		v.clear();
	}
}