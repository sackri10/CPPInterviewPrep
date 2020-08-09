

#include <bits/stdc++.h>
using namespace std;


void solve()
{
    int n, k, maxMoves = INT_MAX, position = -1, p;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> p;
        if (p < k && k % p == 0)
        {
            int moves = k / p;
            
            if (moves - 1 < maxMoves)
            {
                maxMoves = moves - 1;
                position = p;
            }
        }
    }
    if (position == -1)
        cout << -1;
    else
        cout << position;
    cout << endl;
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
