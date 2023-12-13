#include <bits/stdc++.h>

using namespace std;

void solve()
{
    // Add your solution here
    int n, a = 0, d = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        char tmp;
        cin >> tmp;
        if (tmp == 'A')
        {
            a++;
        }
        else if (tmp == 'D')
        {
            d++;
        }
    }
    if (a > d)
    {
        cout << "Anton";
    }
    else if (a < d)
    {
        cout << "Danik";
    }
    else
    {
        cout << "Friendship";
    }
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
