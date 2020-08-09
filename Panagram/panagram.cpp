
 /*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
/*
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;										// Reading input from STDIN
	cout << "Input number is " << num << endl;		// Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <algorithm>
#include<set>
#include <bits/stdc++.h>

using namespace std;
bool validateParenthesis(char s[]);
map<char,string> mp;
void ValidWordHelper(vector<string> p,string str,int index,char path[],int pathindex);
void CreateMap();
//void printNumber(int n);
//void printAllpathsfromCEO(int ceoid);
//void printPath(int path[],int idx,int empid);
//map<int,vector<int>> hashMap;
void printAllpermutations(int a[],int n);
vector<string> genAllValidWords(string digitSeq);
set<int> s;
void printPermutations(int a[],int path[],int index,int n,int pathindex);
int main() {
int nooftestcases;
 cin>>nooftestcases;
 for(int i=0;i<nooftestcases;i++)
 {
     int n;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++)
     {
         cin>>arr[i];
     }
     printAllpermutations(arr,n);
     cout<<endl;
 }
//validateParenthesis(")(())(");
// genAllValidWords("34");
}




// vector<string> genAllValidWords(string digitSeq)
// {
//   CreateMap();
//   char k=digitSeq[0];
//   string str=mp[k];
//   vector<string> finalV;  
//   char path[digitSeq.length()];
//   ValidWordHelper(finalV,digitSeq,0,path,0);
//   return finalV;
// }
// void CreateMap()
// {
//   mp['2']="abc";
//   mp['3']="def";
//   mp['4']="ghi";
//   mp['5']="jkl";
//   mp['6']="mno";
//   mp['7']="pqrs";
//   mp['8']="tuv";
//   mp['9']="wxyz";
// }
// void ValidWordHelper(vector<string> &p,string str,int index,char path[],int pathindex)
// {
//   string k=mp[str[index]];
  
//   if(pathindex==str.length())
//   {
//       string s;
//       for(int i=0;i<pathindex;i++)
//         s+=path[i];
//       cout<<s<<endl;
//   	  p.push_back(s);
        
//   }  
  
//   	for(int i=0;k[i]!='\0';i++)
//     {
//         path[pathindex]=k[i];
//     	ValidWordHelper(p,str,index+1,path,pathindex+1);
//     }
  	
// }
bool validateParenthesis(char s[])
{
        
        stack<char> stk;
        // Complete code
  		for(int i=0;s[i]!='\0';i++)
        {
        	switch(s[i])
            {
              case '(':stk.push(')');break;
              case '{':stk.push('}');break;
              case '[':stk.push(']');break;
              case ')':
                if(!stk.empty() && stk.top()!= ')')
                  	return false;
                if(!stk.empty()) stk.pop();
                break;
              case '}':
                	
                if( !stk.empty() && stk.top()!='}')
                  	return false;
                if(!stk.empty()) stk.pop();
                break;
              case ']':                
                if(!stk.empty()&&stk.top()!=']')
                  	return false;
                if(!stk.empty()) stk.pop();
                break;
                
            }
          
        }
  if(stk.empty())
    return true;
  else
    return false;
}


void printAllpermutations(int a[],int n)
{
    int path[n];
    sort(a,a+n);
    for(int i=0;i<n;i++)    
        printPermutations(a,path,i,n,0);
}
void printPermutations(int a[],int path[],int index,int n,int pathindex)
{
  path[pathindex]=a[index];

if(pathindex==n)
  {
    for(int i=0;i<n;i++)
      cout<<path[i];
      cout<<endl;
    
    return;
  }

for(int i=0;i<n;i++)
{  
  printPermutations(a, path,i,n,pathindex+1);
  if(pathindex==n-1)
  return;
  
}
// path[pathindex]=a[index];
// s.insert(a[index]);
// if(pathindex==n-1)
// {
//     for(int i=0;i<n;i++)
//     cout<<path[i]<<" ";
//     cout<<endl;
// }
// for(int i=0;i<n;i++)
// {    
//     printPermutations(a,path,i,n,pathindex+1);
        
// }
// s.erase(s.find(a[index]));



//     do {
//         for(int i=0;i<n;i++)
//             cout<<a[i]<<" ";
//         cout<<endl;
//   } while ( std::next_permutation(a,a+n) );
   // if(index==n)
   // {
   //     for(int i=0;i<n;i++)
   //         cout<<a[i]<<" ";
   //     cout<<endl;
   //     return;
   // }
    
  //  for(int i=index;i<n;i++)
  //  {
   //         swap(a,index,i);
   //         printPermutations(a,index+1,n);
   //             sort(a+index,a+n);
   //         swap(a,index,i);
   // }
    
}

// // Write your code here
// #include <iostream>
// #include <cstdio>
// #include <cstdlib>
// #include <cmath>
// #include <cstring>
// #include <algorithm>
// #include<map>
 
// using namespace std;
// //void printNumber(int n);
// void printSubsetHelper(int a[],int n);
// void printSubset(int a[],int path[],int inc,int index,int n);
// int main() {
// int nooftestcases;
// cin>>nooftestcases;
// for(int i=0;i<nooftestcases;i++)
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int j=0;j<n;j++)    
//         cin>>arr[j];
//     printSubsetHelper(arr,n);
//     cout<<endl;
// }
// }
// void printSubsetHelper(int a[],int n)
// {
//     sort(a,a+n);
//     int path[n];
    
//      for(int i=0;i<n;i++)
//     {
        
//         printSubset(a,path,i,0,n);
//     }
//     return;
// }
// void printSubset(int a[],int path[],int index,int inc,int n)
// {
//     path[inc]=a[index];

//         for(int j=0;j<=inc;j++)
//         {
//             cout<<path[j]<<" ";
//         }
//         cout<<endl;
//      for(int i=index+1;i<n;i++)
//       printSubset(a,path,i,inc+1,n);
// }     
        
    
    

 
 