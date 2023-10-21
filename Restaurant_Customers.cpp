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
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
 
    ll n;cin>>n;
    ll a[n],b[n];
    vector<ll>v;
    map<ll,ll>mp;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
        if(mp[a[i]]!=1)
        {v.push_back(a[i]);mp[a[i]]=1;}
        if(mp[b[i]]!=1)
        {v.push_back(b[i]);mp[b[i]]=1;}
    }
    sort(v.begin(),v.end());
 
//    for(ll i=0;i<v.size();i++)cout<<v[i]<<" ";
//    cout<<endl;
 
    map<ll,ll>m;
    ll cnt=1;
    for(ll i=0;i<v.size();i++)
    {
        m[v[i]]=cnt;
        cnt+=2;
    }//cout<<cnt<<endl;
 
    ll x[cnt+2]={0};
 
//    for(ll i=0;i<n;i++)
//    {
//        cout<<m[a[i]]<<" "<<m[b[i]]<<" ";
//    }cout<<endl;
//    //
 
    for(ll i=0;i<n;i++)
    {
        x[m[a[i]]]+=1;
        x[m[b[i]]+1]+=-1;
    }//cout<<x[14]<<endl;
 
    ll y=0;
    for(ll i=1;i<=cnt+1;i++)//cout<<x[i]<<" ";
    {
        x[i]=x[i]+x[i-1];
        //y=max(y,x[i]);
    }
 
    for(ll i=0;i<cnt+1;i++)//cout<<x[i]<<" ";
    {
        y=max(y,x[i]);
    }
    cout<<y<<endl;
 
 
 
 
}
