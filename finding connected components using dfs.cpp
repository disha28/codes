#include <bits/stdc++.h>
using namespace std;
vector<int>ar[100001];
int visited[100001];

void dfs(int n)
{
    visited[n]=1;
    for(int i:visited[n])
    if(!visited[i])
    dfs(i);
}

int main() {
    int n,e;
    cin>>n>>e;
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        ar[a].push_back(b);
        ar[b].push_back(a);
        
        int cc=0;
        for(i=1;i<=e;i++)
        if(!visited(i))
        dfs(i),cc++;
        cout<<cc;
        
    }
	
	return 0;
}