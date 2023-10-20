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
        ll n,m,k;
        cin>>n>>m>>k;
        ll a[n],b[m];

        for(ll i=0; i<n; i++)cin>>a[i];
        sort(a,a+n);
        for(ll i=0; i<m; i++)cin>>b[i];
        sort(b,b+m);


        ll i=0,x=0,j=0;
        while(i<n && j<m)
        {
            if(abs(a[i]-b[j])<=k)
            {
                i++;j++;x++;
            }
            else
            {
                if(a[i]>b[j])j++;
            else i++;
            }
        }
        cout<<x<<endl;
    }

}
