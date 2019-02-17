#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;


int main() {
    long n,i,cnt;
        string  st;
        cin>>st;
        n=st.length();
        for(i=0;i<n;i++){
                cnt=1;
                while (i<n-1 && st[i]==st[i+1])
                { 
            cnt++; 
            i++; 
        } 
               if(cnt>1)
                       cout<<st[i]<<cnt;
                else
                        cout<<st[i];
        }
     
    return 0;
}
