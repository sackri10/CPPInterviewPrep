

#include <bits/stdc++.h>
using namespace std;


void solve()
{
   int n,p;
   cin>>n;
   p=0;
   while(n>0){
       p= (p *10) + n%10;
       n=n/10;
   }
    cout<<p;

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
