#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>

using namespace std;
int panagram(string str,int a[]);
int main() {
	// your code goes here
	int n; 
	int a[26];
	int sum[15];
	string str;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<26;j++)
		{
			cin>>a[j];
		}		
		cin>>str;
		sum[i]=panagram(str,a);
	}
	for(int i=0;sum[i]!='\0';i++)
	cout<<sum[i]<<endl;
}
int panagram(string str,int arr[])
{
	int sum=0;
	for(int i=0;i<26;i++)
	{
		char a=i+'a';
		std::size_t found = str.find(a);
  		if (found==std::string::npos){
			  sum=sum+arr[i];
		  }

	}
	return sum;
	
	
}