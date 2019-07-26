#include <bits/stdc++.h>
using namespace std;

int main() {
    int y,d;
    cin>>y;
    if(y==1918)
    d=26;
    else if((y<1919)&&(y%4==0))
    d=12;
    else if ((y % 4 == 0) && (y% 100 != 0)) 
    {
        d=12;
    }
    else if(y%400==0)
    d=12;
    else
    d=13;
    cout<<d<<".09."<<y;
    return 0;
}
