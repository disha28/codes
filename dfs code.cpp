#include <bits/stdc++.h>
using namespace std;

void print(int **edges,int n,int sv,bool *visted)
{
    int i;
    cout<<sv<<endl;
    visited[sv]=true;
    for(i=0;i<n;i++)
    {
        if(i==sv)
        {
            continue;
        }
        if (edges[sv][i]==1)
        {
            if(visited[i]==true)
            {
                continue;
            }
            print(edges,n,i,visited);
        }
    }
    
}
int main() {
    int n,e,i,j;
    cin>>n>>e;
    int **edges=new int *[n];
    for(i=0;i<n;i++)
    {
        edges[i]=new int [n];
        for(j=0;j<n;j++)
        {
            edges[i][j]=0;
        }
    }
    
    for(i=0;i<e;i++)
    {
        int f,s;
        cin>>f>>s;
        edges[f][s]=1;
        edges[s][f]=1;
        boolean *visited=new int[n];
        for(i=0;i<n;i++)
        {
            visited[i]=false;
        }
        print(edges,n,0,visited);
        }
        
	return 0;
}