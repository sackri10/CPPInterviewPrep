

#include <bits/stdc++.h>
using namespace std;

int getMaxDigitsNeededForNumber(int num){
   
    return ceil((double)num / 9);

}
void solve()
{
   int r,c;
   cin>>c>>r;
   int  cp=getMaxDigitsNeededForNumber(c),cr=getMaxDigitsNeededForNumber(r);
   if(cp < cr)
   cout<<0<<" "<<cp;
   else
       cout<<1<<" "<<cr;
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
