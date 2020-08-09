#include<bits/stdc++.h>
using namespace std;
#define X 1000
void printAllMatrixPathsHelper(int m[X][X], int r, int c,int i,int j) {
	if(i>=r && j>=c)
    {
    	
      	return ;
    }
  
  printf("%d ",m[i][j]);
  printAllMatrixPathsHelper(m,r,c,i+1,j);
  printAllMatrixPathsHelper(m,r,c,i,j+1);
}

void printAllMatrixPaths(int m[X][X], int r, int c) {
return printAllMatrixPathsHelper(m,r,c,0,0);
}


int main()
{
  	int t;
  	int r, c;
	int a[X][X];
  	scanf("%d", &t);
  	printf("dddd");
  	while(t--){
      printf("dddd");
      scanf("%d %d", &r, &c);
      printf("dddd");
      int i, j;
      printf("dddd");
      for(i=0;i<r;i++)
        for(j=0;j<c;j++)
          scanf("%d", &a[i][j]);      
      printf("dddd");
	  printAllMatrixPaths(a, r, c);
      printf("\n");
    }
	return 0;
}