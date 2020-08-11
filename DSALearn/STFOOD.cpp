

#include <bits/stdc++.h>
using namespace std;


void solve()
{
  int dishesCount,maxProfit=-1,storeNumber;
  cin>>dishesCount;
  for(int i=0;i<dishesCount;i++){
      int s,v,p;
      cin>>s>>v>>p;
      s=s+1;
      int share= floor(v/s);
      maxProfit =max(share*p, maxProfit);
  }
  cout<<maxProfit<<endl;

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
