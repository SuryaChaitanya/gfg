#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int max(int a, int b)
{
	return (a>b)?a;b;
}

int lcs(char *x, char *y, int m, int n)
{
	if(m==0 || n==0)
	{
		return 0;
	}
	if(x[m-1]==y[n-1])
		return 1+lcs(x,y,m-1,n-1)
	else
		return max(lcs(x,y,m-1,n), lcs(x,y,m,n-1));
}

int main()
{
	char *x,*y;
	cout<<"Enter the string x :: ";
	cin>>x;
	cout<<"\nEnter the string y :: ";
	cin>>y;
	int m=strlen(x);
	int n=strlen(y);
	
	cout<<"\nthe length of the longest common subsequence is :: ";
	cout<<lcs(x,y,m,n);
	return 0;
}
