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
    //T
    {
        ll n,x,c=0;cin>>n>>x;
        ll a[n];
        for(ll i=0;i<n;i++)cin>>a[i];
        sort(a,a+n);

        //for(ll i=0;i<n;i++)cout<<a[i]<<" ";
        //cout<<endl;

        ll k=0;

        for(ll i=n-1;i>=k;i--)
        {
           if(a[i]+a[k]<=x)k++;
           c++;
        }
        cout<<c<<endl;
    }

}
