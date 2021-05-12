#include <iostream>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		int p[n];
		for(int i=0;i<n;i++)
		p[i]=a[i];

		for(int i=0;i<n;i++)
		{
			if(a[i]==-1)
			{
				int s=0;
				for(int j=0;j<i;j++)
				s=s+p[j];
				p[i]=s/i;
			}
			
		}
		for(int i=0;i<n;i++)
		cout<<p[i];
		
}
return 0;
}
