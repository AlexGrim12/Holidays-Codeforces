#include <bits/stdc++.h>

using namespace std;

void solve()
{
    // Add your solution here
    int n;
    float ans;
    vector<int> p;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        ans += tmp;
    }
    cout << setprecision(numeric_limits<double>::digits10)<< ans / (n) << endl;
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
