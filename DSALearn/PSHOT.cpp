

#include <bits/stdc++.h>
using namespace std;

bool IsResultCanBeFound(int goalA, int goalsB,int pendingshotofA,int pendingshotofB) {
   
    if(goalA > goalsB + pendingshotofB || goalsB > goalA + pendingshotofA){
        return true;
    }
    else
    {
        return false;
    }
    

}
void solve()
{
  int noofshots;
  cin>>noofshots;
  int resultDeclarerShot=-1;      
  string s;
  cin>>s;
  int gA=0,gB=0,sA=0,sB=0;
  for(int i=0;i<noofshots*2;i++){
      if(i%2 ==0)
      {
          sA++;
          if (s[i]== '1')
              {
                  gA++;
              }
      }
      if (i%2 ==1)
      {
          sB++;
          if (s[i]=='1')
          {
              gB++;
          }
      }
      if (IsResultCanBeFound(gA, gB, noofshots -sA, noofshots-sB)) {
          resultDeclarerShot=i+1;
                break;
        }
        if(i==noofshots*2 -1)
            resultDeclarerShot=i+1;
  }

  cout<<resultDeclarerShot;
  

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

