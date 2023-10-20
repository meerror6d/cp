#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<cmath>
#include<string>
#define ll long long int
#define T ll t;cin>>t;while(t--)
#define f(n) for(ll i=0;i<n;i++)
#define f1(n) for(ll i=0;i<n;i++)


using namespace std;

//ll binary(ll a,ll b)
//{
//    ll mid=(a+b)/2;
//
//    if((n*mid*mid+(m*mid)-c)==0)cout<<mid/2<<endl;
//    else if((n*mid*mid+(m*mid)>c))binary(mid+1,b);
//    else binary(a,mid-1);
//}

ll summ(ll a)
{
    ll b=a,sum=0;
    for(ll i=1; i<=19; i++)
    {
        sum+=b%10;
        b/=10;
    }
    return sum;
}
int main()
{
 set<ll>s;
    T
    {
        ll x;cin>>x;

        s.insert(x);
    }cout<<s.size()<<endl;

}
