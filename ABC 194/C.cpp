//ATCODER
//C.cpp

#include<bits/stdc++.h>
using namespace std;
#define ll  long long int

int main()
{
    ll n, ans = 0;
    cin >> n;
    vector<ll>v;map<int, int>mp;
    for(ll i = 0 ;i < n ;i++)
    {
        ll x ;
        cin >> x;
        v.push_back(x);
        mp[v[i]]++;
    }
    for(ll i = 0 ; i < n ; i++)
    {
        mp[v[i]]--;
        for(auto p:mp)
        {
            ll x = p.first;
            ll add = p.second;
            ans += (x-v[i])*(x-v[i])*add;
        }
    }
    cout << ans << endl;
}
