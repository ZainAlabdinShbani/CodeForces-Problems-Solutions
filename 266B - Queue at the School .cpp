#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main()
{
    int n,t,count=0;
    string s;
    cin>>n>>t;
    cin>>s;
    while(t!=0){
        for(int i=1;i<=n;i++){
           
            if (s[i]=='G' && s[i-1]=='B'){
                swap(s[i-1],s[i]);
                i++;
            }
        }
        t--;
    }

    cout<<s<<endl;


    return 0;
}


