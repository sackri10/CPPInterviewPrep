#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(int a[], int n);
int main() {
	// your code goes here
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)

		cin>>a[i];
	removeDuplicates(a,n);
}


int removeDuplicates(int a[], int n){
  int j=-1;  
  int k;
  int p;
  k=a[0];
  	for(int i=1;i<n;i++)
    {
      
    	if(k == a[i])
		{
		if(j!=-1)
          j=i;
		else
		continue;  
		}
          else
          {
            if(j!=-1)
            {
              int q=i;
            	while(j<q)
                {
                	a[j]=a[i];
                  	j++;
                  	i++;
                  p++;
                }
              	j=-1;
              	k=a[i];
            }
            else
            {
              k=a[i];
              
         	 }
          }
    }
 return p; 
}