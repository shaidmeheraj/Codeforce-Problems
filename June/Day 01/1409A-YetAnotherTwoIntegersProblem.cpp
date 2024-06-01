/* Bismillahir Rahmanir Raheem */
/* Shaid Meheraj */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void solve()
{
    ll a, b;
    cin >> a >> b;
    ll temp;
    if(a>b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    //cout << a << " "  << b;
    if(a == b ) cout << (b-a) << endl;

    else if((b-a)%10==0) cout << ((b-a)/10) << endl;
    else
    cout << ((b-a)/ 10) + 1 << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}

//Alhamdulillah...
