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
    ll n,x;cin>>n>>x;
    ll a[n];
    map<ll,ll>m;
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];m[a[i]]++;
    }

    ll s1=0,s2=0,p1=-1,p2=0;
    for(ll i=0;i<n;i++)
    {
        s1=a[i];
        m[s1]--;
        s2=x-s1;
        if(m[s2]==1){p1=i+1;break;}
    }

    for(ll i=0;i<n;i++)
    {
        if(a[i]==s2)p2=i+1;
    }

    if(p1==-1)cout<<"IMPOSSIBLE"<<endl;
    else cout<<p1<<" "<<p2<<endl;

}



