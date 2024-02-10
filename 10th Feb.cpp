#include <bits/stdc++.h>
using namespace std;

// Tower of Hanoi : 10/02/2024
//  void solve(int a, int b, int c, int n)
//  {
//      if (n == 0)
//          return;
//      solve(a, c, b, n - 1);
//      cout << a << ' ' << c << endl;
//      solve(b, a, c, n - 1);
//  }

// Creating Strings : 10/02/2024
void AllStrs(string &s, int idx,set<string>& st)
{
    if (idx >= s.size())
    {
        st.insert(s);
        return;
    }
    for (int i = idx; i < s.size(); i++)
    {
        swap(s[idx], s[i]);
        AllStrs(s,idx + 1, st);
        swap(s[idx], s[i]);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    vector<string> ans;
    set<string> st;
    AllStrs(s, 0, st);
    for(auto it : st)
    {
        ans.push_back(it);
    }
    cout<<ans.size()<<endl;
    sort(ans.begin(),ans.end());
    for (auto it : ans)
    {
        cout << it << endl;
    }
}