#include<bits/stdc++.h>
using namespace std;
void selSort(int arr[100],int n)
{
    int key,i,j;
    for(int i=0;i<n;i++)
    {   
        int min=i;

        for(int j=i+1;j<n;j++)
        {
            if(arr[min]>arr[j])
            {
                min=j;
            }
        }

        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }


}
int main()
{
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    selSort(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    
}