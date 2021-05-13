// print the series of all prime numbers till N.


#include<bits/stdc++.h>
using namespace std;

int main() 
{
	int t; 
	cin>>t;
		
		
	for(int m=2;m<n;m++)
        {
		int count=0;
		for(int k=1;k<=m;k++)
		{
			if(m%k==0)
			{
			count++;			
			}
		}
		if(count==2)
			cout<<m<<" ";
        }
	
