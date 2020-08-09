/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<bits/stdc++.h>
using namespace std;
set<string> sp;
void printPasswordCombinations(string str);
void printPasswordCombinationsHelper(string str,int pathindex,char path[],int index,int casep,char p);
int main()
{
    int nooftestcases;
    cin>>nooftestcases;
    for(int i=0;i<nooftestcases;i++)
    {
        string str;
        cin>>str;
        printPasswordCombinations(str);
        cout<<endl;
    }
}
void printPasswordCombinations(string str)
{
    char path[str.length()];
    sp.clear();
    printPasswordCombinationsHelper(str,0,path,0,0,'3'); 
    std::set<string>::reverse_iterator rit;
     for ( rit = sp.rbegin(); rit != sp.rend(); ++rit )
        cout << *rit<<" ";
    
}
void printPasswordCombinationsHelper(string str,int pathindex,char path[],int index,int casep,char p)
{
    if(pathindex >str.length())
    return;
    if(pathindex==str.length())
    {
        string st;
        for(int i=0;i<pathindex;i++)
            st+=path[i];
      sp.insert(st);
        return;
    }
    for(int i=0;i<2;i++)
    {
        char c=str[index];
        if(isalpha(c))
        {
            if(i==1)
            c=toupper(c);
        }
        path[pathindex]=c;  
        if((isalpha(c) && i==1) || i==0)
        printPasswordCombinationsHelper(str,pathindex+1, path,index+1,i,c);
    }    
     
    
    
    
}