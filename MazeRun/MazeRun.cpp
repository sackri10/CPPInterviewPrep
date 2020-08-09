/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<bits/stdc++.h>
using namespace std;
void findMaze();
vector<string> mazeop;
void printMazeHelper(int rowindex,int colindex,int pathindex,char path[],char c);
int row,col;
int a[100][100];
int dp[100][100];
int main()
{
    int nooftestcases;
    cin>>nooftestcases;
    for(int i=0;i<nooftestcases;i++)
    {
        cin>>row;
        cin>>col;
        
        for(int j=0;j<row;j++)
        {
            for(int k=0;k<col;k++)
            {
                cin>>a[j][k];
            }
        }
        mazeop.clear();
        findMaze();
        sort(mazeop.begin(),mazeop.end());
        for(int i=0;i<mazeop.size();i++)
        cout<<mazeop[i]<<" ";
        cout<<endl;
    }
    return 0;
}
void findMaze()
{
    char path[100];
    dp[0][0]=1;
    for(int i=0;i<100;i++)
        fill(dp[i],dp[i]+100,0);
    printMazeHelper(0,0,-1,path,'D');
    
}
void printMazeHelper(int rowindex,int colindex,int pathindex,char path[],char c)
{


	
    if(pathindex!=-1)
        {
            path[pathindex]=c;
         
        }
      
    if(rowindex==row-1 && colindex==col-1)
    {
        dp[rowindex][colindex]=1;
        string st;
        for(int i=0;i<= pathindex;i++)
        st+= path[i];
        mazeop.push_back(st);
        cout<<endl;
        return;
    }
    if(rowindex <0 || colindex<0  || rowindex >= row || colindex >= col ||a[rowindex][colindex] == 0|| dp[rowindex][colindex] ==1 )	
	return;
	dp[rowindex][colindex]=1;
	printMazeHelper(rowindex,colindex-1,pathindex+1,path,'L');
    
		//Right Case 
    
     printMazeHelper(rowindex,colindex+1,pathindex+1,path,'R');
    
    //Down Case
    
     printMazeHelper(rowindex+1,colindex,pathindex+1,path,'D');
    //Left Case
     
    
	  
    //Up Case
    
    printMazeHelper(rowindex-1,colindex,pathindex+1,path,'U');
     dp[rowindex][colindex]=0;
}