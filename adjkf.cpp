#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  int t;
  cin >> t;
  while(t--)
  {
    int n;
    cin >> n;
    ll a[n];
    ll mx=0;
    for(int i=0; i<n; i++)
    {
      cin >> a[i];
      mx = max(mx, a[i]);
    }
    ll temp[100005]={0};
    for(int i=0; i<n; i++)
    {
        temp[a[i]]++;
    }
    ll ans = 0;
    ll a1 = 0, a2 = 0;
    for(ll i=1; i<=1000; i++)
    {
        for(ll j=i; j<=1000; j+=i)
        {
            if(i!=j)
            {
              ans += temp[i]*temp[j];
            }
        }
    }
    for(ll i=1; i<=1000; i++)
    {
        for(ll j=i; j<=1000; j+=i)
        {
            if(i!=j)
            {
              ans += temp[i]*temp[j];
            }
        }
    }

    cout << ans << endl;
  }
  return 0;
}
