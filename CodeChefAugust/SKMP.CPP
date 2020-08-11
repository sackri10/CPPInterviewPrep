

#include <bits/stdc++.h>
using namespace std;

int getMaxDigitsNeededForNumber(int num){
   
    return ceil((double)num / 9);

}
void solve()
{
   string s,p;
   cin>>s>>p;
   int lengthofS=s.length(), patternlength=p.length();
   sort(s.begin(),s.end());
   for(int i=0;i<patternlength;i++){       
       size_t index =s.find_last_of(p[i]);       
       s.erase(index,1);
   }
   char firstP=p[0];int joinIndex=-1;
   for(int i=0;i<s.length();i++){
       if(s[i] > firstP ){
           joinIndex=i;
           break;
       }
   }
   if()
   cout<<s.substr(0,joinIndex-1)<<p<<s.substr(joinIndex);

   cout<<endl;

}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
