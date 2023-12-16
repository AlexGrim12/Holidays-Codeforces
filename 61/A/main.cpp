#include <bits/stdc++.h>

using namespace std;

void solve()
{
    // Add your solution here
    string s1, s2, s3;
    cin >> s1 >> s2;
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] == s2[i])
            s3.push_back('0');
        else
            s3.push_back('1');
    }
    cout << s3 << endl;
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
