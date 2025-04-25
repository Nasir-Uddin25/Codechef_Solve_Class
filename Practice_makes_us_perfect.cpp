// https://www.codechef.com/problems/PRACTICEPERF
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int p1, p2, p3, p4;
    // cin >> p1 >> p2 >> p3 >> p4;

    // int cnt = 0, cnt1 = 0, cnt2 = 0, cnt3 = 0;
    // if (p1 >= 10)
    //     cnt++;
    // if (p2 >= 10)
    //     cnt1++;
    // if (p3 >= 10)
    //     cnt2++;
    // if (p4 >= 10)
    //     cnt3++;

    // cout << cnt + cnt1 + cnt2 + cnt3 << endl;

    int a[4], cnt = 0;
    for (int i = 0; i < 4; i++)
        cin >> a[i];

    for (int i = 0; i < 4; i++)
    {
        if (a[i] >= 10)
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}
