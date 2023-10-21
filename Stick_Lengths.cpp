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
    ll n,s=0;cin>>n;
    ll a[n];

    for(ll i=0;i<n;i++)cin>>a[i];

    sort(a,a+n);

    ll mid=a[n/2];//cout<<mid<<endl;
    for(ll i=0;i<n;i++)
    {
        s+=abs(a[i]-mid);
    }cout<<s<<endl;

}



