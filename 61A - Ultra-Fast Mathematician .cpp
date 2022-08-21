#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string x,y;
    cin>>x>>y;
    for(int i=0,j=0;i<x.size();i++,j++){
        if(x[i]==y[j])
            cout<<0;
        else
            cout<<1;
    }
    return 0;
}
