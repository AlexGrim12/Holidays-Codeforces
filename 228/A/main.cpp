#include <bits/stdc++.h>

using namespace std;

void solve()
{
    // Add your solution here
    set<int> colors;
    for (int i = 0; i < 4; i++)
    {
        int tmp;
        cin >> tmp;
        colors.insert(tmp);
    }
    int ans = abs(static_cast<int>(colors.size()) - 4);
    cout << ans << endl;
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
