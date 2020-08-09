#include <cstdlib> 
#include <algorithm> 
#include <map>
#include <vector>
#include <iostream>
using namespace std;
void miniMaxSum(vector<long long>a);
int main()
{
 vector<long long> arr;
int n;
cin>>n;
long long x;

for(int i=0;i<n;i++)
{
    cin>>x;
    arr.push_back(x);
}
   miniMaxSum(arr) ;
    
}
void miniMaxSum(vector<long long>a)
{
   long long x;
   int i=0;
    while(i<a.size() -3)
    {   
         if(a[i] +1==a[i+1] && a[i+1]+1==a[i+2] )
         {
             cout<<"yes";
             return;
         }
         i=i+1;
    }
    
}