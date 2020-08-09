#include<bits/stdc++.h>
using namespace std;
int arr[100];
int n;
void heapify(int index);
struct comparator {
 bool operator()(int i, int j) {
 return i > j;
 }
};
  
void findMedian(double arr[], int n) 
{ 
    // max heap to store the smaller half elements 
    priority_queue<double> s; 
  
    // min heap to store the greater half elements 
    priority_queue<double,vector<double>,greater<double> > g; 
  
    double med = arr[0]; 
    s.push(arr[0]); 
  
    cout << med << endl; 
  
    // reading elements of stream one by one 
    /*  At any time we try to make heaps balanced and 
        their sizes differ by at-most 1. If heaps are 
        balanced,then we declare median as average of 
        min_heap_right.top() and max_heap_left.top() 
        If heaps are unbalanced,then median is defined 
        as the top element of heap of larger size  */
    for (int i=1; i < n; i++) 
    { 
        double x = arr[i]; 
  
        // case1(left side heap has more elements) 
        if (s.size() > g.size()) 
        { 
            if (x < med) 
            { 
                g.push(s.top()); 
                s.pop(); 
                s.push(x); 
            } 
            else
                g.push(x); 
  
            med = (s.top() + g.top())/2.0; 
        } 
  
        // case2(both heaps are balanced) 
        else if (s.size()==g.size()) 
        { 
            if (x < med) 
            { 
                s.push(x); 
                med = (double)s.top(); 
            } 
            else
            { 
                g.push(x); 
                med = (double)g.top(); 
            } 
        } 
  
        // case3(right side heap has more elements) 
        else
        { 
            if (x > med) 
            { 
                s.push(g.top()); 
                g.pop(); 
                g.push(x); 
            } 
            else
                s.push(x); 
  
            med = (s.top() + g.top())/2.0; 
        } 
  
        printf("%*.*f",7,2,med);
    } 
} 
  

void heapify(int index)
{
    int leftchildindex,rightchildindex;
    leftchildindex=2*index+1;
    rightchildindex=2*index+2;
    int mindex=index;
    if(leftchildindex < n && arr[index] < arr[leftchildindex])
        mindex=leftchildindex;
    if( rightchildindex < n &&arr[mindex]<arr[rightchildindex])
        mindex=rightchildindex;

    if(mindex!=index) 
    {
        int t=arr[mindex];
        arr[mindex]=arr[index];
        arr[index]=t;
        heapify(mindex);
        
    }
}


int main ()
{
     	// Your Code here...
         
  int nooftestcases;
  cin>>nooftestcases;
  for(int i=0;i<nooftestcases;i++)
  {
    
        int n;
        cin>>n;
       double arr[1000];
      for(int j=0;j<n;j++)
      {
       cin>>arr[j]; 
      }
      findMedian(arr,n);
      cout<<endl;

  }
  
  
  
	return 0;
    
    // cin>>n;
    
    // for(int i=0;i<n;i++)
    // {
    //     cin>>arr[i];
    // }
    // for(int i=(n-1)/2;i>=0;i--)
    // {
    //     heapify(i);
    // }
    //  for(int i=0;i<n;i++)
    // {
    //     cout<<arr[i];
    // }


}
