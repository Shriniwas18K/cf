#include<iostream>
#include<set>
using namespace std;
int b[100];
int c[100];
signed main()
{
	int t;
	cin>>t;
	int n,m,k;
	int temp;
	while(t--)
	{
		cin>>n>>m>>k;
		for(int i=0; i<n; i++)
		{
			cin>>b[i];
		}
		for(int i=0; i<m; i++)
		{
			cin>>c[i];
		}
		int counter=0;
		for(int f=0; f<n; f++)
		{
			for(int s=0; s<m; s++)
			{
				if(((b[f])+(c[s]))<=k)
				{
					counter++;
				}
			}
		}
		cout<<counter<<endl;
	}
}
