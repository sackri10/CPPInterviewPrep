#include<bits/stdc++.h>
using namespace std;
void insSort(int arr[100],int n)
{
    int key,i,j;
    for(int i=1;i<n;i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }


}
int main()
{
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    insSort(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    
}