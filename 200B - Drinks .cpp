#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    double n,x,sum=0;
    cin>>n;
    int y=n;
    while(n--){
        cin>>x;
        sum+=x;
    }
    sum/=y;
    cout<<sum<<endl;

    return 0;
}
