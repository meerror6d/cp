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
    ll a[n];

    for(ll i=0;i<n;i++)cin>>a[i];

    ll s1=0,s2=INT_MIN;

    for(ll i=0;i<n;i++)
    {
        s1+=a[i];
        s2=max(s2,s1);

        if(s1<0)s1=0;
    }cout<<s2<<endl;

}
