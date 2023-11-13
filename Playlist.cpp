#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
#define ll long long int
#define T ll t;cin>>t;while(t--)
#define f(n) for(ll i=0;i<n;i++)
#define f1(n) for(ll i=0;i<n;i++)
 
using namespace std;
 
int main()
{
 
    //T
    {
        ll n,c=0,b=INT_MIN;cin>>n;
        ll a[n+1];
 
        for(ll i=1;i<=n;i++)cin>>a[i];
 
        map<ll,ll>m;
        ll l=0;
        for(ll i=1;i<=n;i++)
        {
            if(m[a[i]]>l)
            {
                l=m[a[i]];//cout<<"l "<<l<<endl;
            }
            b=max(b,i-l);
            m[a[i]]=i;
 
        }cout<<b<<endl;
 
    }
 
}
