#include<bits/stdc++.h>



using namespace std;
typedef long long ll;

ll gcd(ll a,ll b)
{
    if(b==0){return a;}

    return gcd(b,a%b);
}


int main()
{
    ll gcd_ans=gcd(5000,1625);
    cout<<gcd_ans<<endl;

    return 0;
}