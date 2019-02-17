#include <bits/stdc++.h>
using namespace std;
long long  gcd(long long  a,long long  b)
{
    if(b==0)
    return a;
    else
    return gcd(b,a%b);
}

int main() {
    long long  h,k,a,b,x,y,g,m;
    cin>>h>>k>>x>>y;
       g=gcd(x,y);
    x=x/g;
    y=y/g;
    if(h<x||k<y){
            cout<<0<<" "<<0;
    }
    else{
    a=h/x;
    b=k/y;
    m=min(a,b);
    cout<<m*x<<" "<<m*y;}
    return 0;
}




