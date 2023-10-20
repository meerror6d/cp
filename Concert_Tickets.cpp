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


int main()
{
    ll n,m,a,b;cin>>n>>m;
    multiset<ll, greater<ll> >s;

    for(ll i=0;i<n;i++)
    {
        cin>>a;
        s.insert(a);
    }


    for(auto i:s)cout<<i<<" ";
    cout<<endl;

    for(ll i=0;i<m;i++)
    {
        cin>>b;
        auto it= s.lower_bound(b);

        if(it==s.end())cout<<-1<<endl;
        else {cout<<(*it)<<endl;s.erase(it);}
    }


}
