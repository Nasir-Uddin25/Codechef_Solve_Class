#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;
        int one = 0, zero = 0, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                one++;
            if (s[i] == '0')
                zero++;
            if (one == zero)
                cnt++;
        }
        
        int ans = (1 << cnt);
        cout << ans << endl;
    }
    return 0;
}