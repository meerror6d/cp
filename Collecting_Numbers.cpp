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
    ll n;cin>>n;

    ll a[n],x=1;
    vector<pair<ll,ll> > v;
    for(ll i=0;i<n;i++){cin>>a[i];v.push_back({a[i],i+1});}

    sort(v.begin(),v.end());
    for(ll i=0;i<n-1;i++)
    {
        if(v[i].second>v[i+1].second)x++;
    }cout<<x<<endl;

}
