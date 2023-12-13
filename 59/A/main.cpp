#include <bits/stdc++.h>

using namespace std;

void solve()
{
    // Add your solution here
    string s;
    cin >> s;
    int size = s.size();
    int upper = 0, lower = 0;
    for (int i = 0; i < size; i++)
    {
        if (isupper(s[i]))
            upper++;
        else
            lower++;
    }
    if (upper > lower)
    {
        for (int i = 0; i < size; i++)
            s[i] = toupper(s[i]);
    }
    else
    {
        for (int i = 0; i < size; i++)
            s[i] = tolower(s[i]);
    }
    cout << s << endl;
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
