#include <iostream>
#include<bits/stdc++.h>
using namespace std;
long PrintMaxCostHelper(long a[],int n,int index,long sum);
long GetMaxCost(long a[],int n);
 void MakeDP();
long dp[10000];
int main() {
	int testcases;
	cin>>testcases;
	for(int i=0;i<testcases;i++)
	{
		int n;
		cin >>n;
		long arr[n];
		for(int j=0;j<n;j++)
		{
			cin>>arr[j];
		}
		long k=GetMaxCost(arr,n)	;
		cout<<"Case "<<i+1<<": "<<k;
		cout<<endl;
	}
	return 0;
}
long GetMaxCost(long a[],int n)
{
  MakeDP();
	return PrintMaxCostHelper(a,n,0,0);
	
}
void MakeDP()
{
  fill(dp,dp+10000,-1);
}

long PrintMaxCostHelper(long a[],int n,int index,long sum)
{
	if(index==n-1)
		return sum+a[index];
	if(index > n-1)
		return sum;
		if(dp[index] !=-1)
		{
	 	return dp[index];
		}
		else
		{
			long withme=a[index]+PrintMaxCostHelper(a,n,index+2,sum);
			long withoutme=PrintMaxCostHelper(a,n,index+1,sum);
      sum= max(withme,withoutme);
      dp[index]=sum;
    
			return dp[index];

		}
	
} 