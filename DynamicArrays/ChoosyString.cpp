#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>

using namespace std;
void ladiesFirst(char *str);
int main() {
	// your code goes here
	char * s;
	s="LLGGLLGGLLGG";
	ladiesFirst(s);
}
void ladiesFirst(char *c)
{
	
	char str[100];
	strcpy( str, c );
	int gindex,lindex;
	int n=strlen(str);
	int arr[100] ;
	int arryindexptr=-1;
	int swapindexptr=-1;
    for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]=='G')
		{
			arryindexptr++;
			arr[arryindexptr]=i;
			if(arryindexptr==0)
				swapindexptr=0;
		}
		else
		{
			if(arryindexptr > -1 && swapindexptr >=0 )
			{
				int index=arr[swapindexptr];				
				str[i]='G';
				str[index]='L';
				i--;
				swapindexptr++;
			}
		}
	}
	c=str;
}