#include<bits/stdc++.h>
using namespace std;
void printArr(int arr[100],int n)
{
     for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
        cout<<endl;
}

int partition(int arr[100],int low,int high)
{

    int pivot=arr[high];
    int i=(low-1);
    for(int j=low;j<=high-1;j++)
    {
        if(arr[j]<=pivot)
        {
            i++;
           int temp=arr[i];
           arr[i]=arr[j];
           arr[j]=temp;
        }
       
    }
            int temp1=arr[i+1];
           arr[i+1]=arr[high];
           arr[high]=temp1;
    return (i+1);

}
void quickSort(int arr[100],int low,int high)
{
    if(low< high)
    {

        int pivot=partition(arr,low,high);
        quickSort(arr,low,pivot-1);
        quickSort(arr,pivot+1,high);

    }
}
int main()
{
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    
e}