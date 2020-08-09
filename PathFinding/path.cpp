#include<bits/stdc++.h>
using namespace std;
int arr[20][20];
int FindPathSumHelper(int row,int col,int rindex,int cindex)
{
    if(cindex>=col || rindex >=row)
        return 0;
    if(row-1==rindex && col-1==cindex)
        return arr[rindex][cindex];
    return arr[rindex][cindex]+max(FindPathSumHelper(row,col,rindex+1,cindex),
    FindPathSumHelper(row,col,rindex,cindex+1));
}
int FindPath(int row,int col)
{
    
    return FindPathSumHelper(row,col,0,0);
}

int main()
{
    int nooftestcases;
    cin>>nooftestcases;
    while(nooftestcases--)
    {
        int row,col;
        cin>>row>>col;
        for(int i=0;i<row;i++)
            for(int j=0;j<col;j++)
                cin>>arr[i][j];
        cout<<FindPath(row,col);
    }
    
    
}