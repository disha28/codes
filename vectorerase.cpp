#include <bits/stdc++.h>
using namespace std;

int main() {
    
int N,temp,i;
int x,a,b;
vector<int> v;
cin>>N;
for(i=0;i<N;i++)
{
    cin>>temp;
    v.push_back(temp);
}

cin>>x;
x=x-1;
v.erase(v.begin()+ x);
cin>>a>>b;
a=a-1;
b=b-1;
v.erase(v.begin()+a,v.begin()+b);
cout<<v.size()<<endl;
for(i=0;i<v.size();i++)
{
    cout<<v.at(i)<<" ";
}



    
    
    
    
    
    
	return 0;
}