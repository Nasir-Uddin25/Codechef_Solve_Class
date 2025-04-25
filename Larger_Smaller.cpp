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

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a.begin(), a.end());

        int mn = a[0];
        int mx = a[n - 1];

        int ans = mx - mn - 1;
        if (mx == mn)
            ans = 0;
        cout << ans << endl;
    }
    return 0;
}