#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD 1000000007
ll solve(ll a[], ll i, ll currSum, ll totalSum)
{
    if (i == 0)
    {
        return abs(totalSum - 2 * currSum);
    }

    ll sum1 = solve(a, i - 1, currSum + a[i - 1], totalSum);
    ll sum2 = solve(a, i - 1, currSum, totalSum);
    return min(sum1, sum2);
}
int main()
{
    ll n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll totalSum = 0;
    for (ll i = 0; i < n; i++)
    {
        totalSum += a[i];
    }
    cout << solve(a, n, 0, totalSum);

    return 0;
}