#include <bits/stdc++.h>

using namespace std;

void solve()
{
    // Add your solution here
    string s;
    cin >> s;
    set<char> st;
    for (char c : s) st.insert(c);
    if (st.size() % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
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
