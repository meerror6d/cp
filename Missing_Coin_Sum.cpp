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
    ll n,m=0;cin>>n;
    ll a[n],b[n];
    for(ll i=0;i<n;i++)cin>>a[i];
 
    sort(a,a+n);
    ll s=1;
    for(ll i=0;i<n && a[i]<=s;i++)
    {
        s+=a[i];
    }cout<<s<<endl;
 
