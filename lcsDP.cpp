#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int max(int a , int b)
{
	return (a>b)?a:b;
}

int lcsdp(char *x, char *y, int m, int n)
{
	int a[m+1][n+1];
	for(int i=0;i<m+1;i++)
		for(int j=0;j<m+1;j++)
			a[i][j]=-1;
	
	int i,j;
	if(m==0 || n==0)
		return 0;
	if(x[m-1]==y[n-1])
	{
		if(a[m-1][n-1]>0)
			return 1+a[m-1][n-1];
		else
			{
				a[m-1][n-1]=1+a[m-1][n-1];
				return a[m-1][n-1];
			}
	}
	else
	{
		if(a[m-1][n-1]>0)
			return a[m-1][n-1];
		else
		{
			a[m-1][n-1]=max(a[m-1][n], a[m][n-1]);
			return a[m-1][n-1];
		}
	}
	return a[m-1][n-1];
	
}

int main()
{
	char x[23],y[23];
	cout<<"Enter the string x :: ";
	cin>>x;
	cout<<"\nEnter the string y :: ";
	cin>>y;
	int m=strlen(x);
	int n=strlen(y);
	
	cout<<"\nthe length of the longest common subsequence is :: ";
	cout<<lcsdp(x,y,m,n)<<endl;
	return 0;
}
