#include <bits/stdc++.h>

using namespace std;

void solve()
{
    // Add your solution here
    int n;
    vector<int> a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            cout << "HARD";
            return;
        }
    }
    cout << "EASY";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case #" << t << ": ";
        solve();
    }
}
