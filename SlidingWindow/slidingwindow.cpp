#include<bits/stdc++.h>
using namespace std;

int main()
{
  	int nooftestcases;
  	cin>>nooftestcases;
  	while(nooftestcases--)
    {
  		int n;
      	cin>>n;
      	int arr[n];
      	for(int i=0;i<n;i++)
        {
          cin>>arr[i];
        }
      	int queries;
      	cin>>queries;
      	while(queries--)
        {
      		int findsum,sum=0,lp=0,rp=0,count=n+1;
              int minCount=0;
          	cin>>findsum;
          	
          	while(rp<n)
            {
							while(sum<=findsum && rp <n)
								sum=sum+arr[rp++];        
							

							while(sum >= findsum && lp<n)
							{
								if(rp-lp < count)
									count=rp-lp;

								sum-=arr[lp++]	;

							}
								
            
            }
						if(count==n+1)
						cout<<-1<<" ";
						else
						cout<<count<<" ";
          
          
        }
    }
	
	return 0;
}