#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<string>
#include<set>
#define ll long long int
#define T ll t;cin>>t;while(t--)
#define f(n) for(ll i=0;i<n;i++)
#define f1(n) for(ll i=0;i<n;i++)

using namespace std;

int main()
{

    //T
    {
        ll a,b;
        cin>>a>>b;
        ll s[b];
        //for(ll i=0;i<b;i++)cin>>s[i];

        set<ll>s1;
        multiset<ll>s2;

        s1.insert(0);
        s1.insert(a);
        s2.insert(a-0);

        for(ll i=0;i<b;i++)
        {
            ll x;cin>>x;
            s1.insert(x);
            auto it=s1.find(x);
            ll q=*prev(it);
            ll p=*next(it);
            s2.erase(s2.find(p-q));
            s2.insert(x-q);
            s2.insert(p-x);
            cout<<*s2.rbegin()<<endl;
        }
    }

}
