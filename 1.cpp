#include <iostream>

using namespace std;

int main() {
	 int t;
	cin>>t;
	while(t--)
	{
		 int n;
		cin>>n;
		long long int a[n];
		for( long int i=0;i<n;i++)
		cin>>a[i];
		long long int p[n+1];
		p[0]=0;
		
		for( int i=1;i<=n;i++)
		p[i]=p[i-1]+a[i-1];
		long int q;
	//	for(int i=1;i<=n;i++)
	//	cout<<p[i];
		cin>>q;
		while(q--)
		{
			 int l,r;
			cin>>l>>r;
			cout<<p[r]-p[l-1]<<endl;
		}
	}
}
