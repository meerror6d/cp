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
        ll n,c=0,b=INT_MIN;
        cin>>n;
        ll a[n];

        for(ll i=0;i<n;i++)cin>>a[i];

        vector<ll>v;

        for(ll i=0;i<n;i++)
        {
            auto it=upper_bound(v.begin(),v.end(),a[i]);
            //cout<<*it<<endl;

            if(it==v.end())v.push_back(a[i]);//cout<<a[i]<<endl;}
            else {*it=a[i];cout<<*it<<endl;}
        }
        cout<<v.size()<<endl;

    }

}
