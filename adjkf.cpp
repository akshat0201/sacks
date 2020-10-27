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
    ll temp[100005]={0};
    for(int i=0; i<n; i++)
    {
      cin >> a[i];
      mx = max(mx, a[i]);
      temp[a[i]]++;
    }    
    ll ans = 0;
    ll a1 = 0, a2 = 0;
    for(ll i=1; i<=10003; i++)         
    {
        for(ll j=i; j<=10003; j+=i)
        {    //Finding pairs of non equal array elements
            if(i!=j)
            {
              ans += temp[i]*temp[j];
            }
            //Finding pairs of equal array elements
            if(i==j)
            {
              ans += ((temp[i]-1)*(temp[i]))/2;
            }
        }
    }

    cout << ans << endl;
  }
  return 0;
}
