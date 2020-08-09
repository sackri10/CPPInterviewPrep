#include <bits/stdc++.h>

using namespace std;

int main(){
  
  int n;  
  cin>>n;
  int maxElement=0,sm=0;
  stack<int> stk;
  stack<int> trk;
  int param[1000];
  int index=-1;
  for(int i=0;i<n;i++)
  {
    int operation;
  	cin>>operation;
    
    switch(operation)
    {
      case 1:
        {
        int k;
        cin>>k;
        if(stk.empty() && trk.empty())
          {
            stk.push(k);
            trk.push(k);
          }
          else
          {
            int max= trk.top();
            stk.push(k);
        if(k>max)
        {
        	trk.push(k);
        } 
        else
        {
          
          trk.push(max);
        }
        
          }     
        }
        break; 
      case 2:
        {
        
        stk.pop();
        trk.pop();
        break;
        }
      case 3:
        {
          int top=trk.top();
        cout<<top<<" ";
    	break;
        }
    }
  }
    // TODO: Your Code Here
// read input from STDIN and print output to STDOUT
}