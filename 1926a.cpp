#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
int l=0,m=0;
char c;
while(t--){
	for(int i=0;i<5;i++){
		cin>>c;
		if(c=='A'){
			l++;
		}else{
			m++;
		}
	}
	l>m ? cout<<"A\n" : cout<<"B\n";
	l=0;m=0;
}
return 0;
}
