// Okay, so I thought of this problem in a greedy way.

// Since we need at least k flowers to be present all the time, I first sorted the array containing bloom times in increasing order.
// Now, in a greedy way, I started to pluck flowers from the start and ignoring the last k flowers(as we have to make sure that k flowers are there all the time), and the starting ones will take much less time to bloom again compared to the flowers later in the sorted array.
// I initialized an ans variable and just kept adding the number of flowers that bloom within d days.
// Initially, I thought to use the floor of the division (for example, if the bloom time is 2 days and d = 10 days, then we would have 10/2, i.e., 5 flowers in 10 days). But later, I realized that if the bloom time is, suppose, 4 days and d = 5, then we will pluck the flower on the first day, and it re-blooms after 4 days, so the total period is (1 + 4) days, and we get ceil(5/4) = 2 blooms (1st bloom on first day and 2nd bloom on 5th day)within the 5 days. That's the idea of taking the ceiling

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
        int n, k, d;
        cin >> n >> k >> d;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        if (n == k)
        {
            cout << 0 << endl;
            continue;
        }

        sort(a.begin(), a.end());
        int ful_cirte_hobe = n - k;

        int ans = 0;
        for (int i = 0; i < ful_cirte_hobe; i++)
        {
            int cnt = (d - 1) / a[i];
            cnt++;
            ans += cnt;
        }

        cout << ans << endl;
    }
    return 0;
}