#include <bits/stdc++.h>
using namespace std;

int m,n;
string grid[9];
const int totalmoves=3;
const int Xmoves[]={-1,0,1};
const int Ymoves[]={0,-1,0};
const string movenames[]={"left","forth","right"};

string output[7];
const string needed="IEHOVA#";

bool getit(int x,int y,int pos)
{
    if(grid[y][x]=='#')
    {
    cout<<output[0];
    for(int i=1;i<pos;++i)
    cout<<' '<<output[i];
    cout<<"\n";
    return true;
    }

else if(pos==needed.size())
return false;
for(int move=0;move<totalmoves;move++)
{
    int newx=x+Xmoves[move],newy=y+Ymoves[move];
    if(newx>=0&&newx<m&&newy>=0&&newy<n&&grid[newy][newx]==needed[pos])
   { output[pos]=movenames[move];
    if(getit(newx,newy,pos+1))
    return true;
   }
}

return false;
}

int main() {

int t,i,j;
cin>>t;
while(t--)
{
    cin>>n>>m;
    int hx,hy;
    for(i=0;i<n;i++)
    {
        cin>>grid[i];
        for(j=0;j<m;j++)
        if(grid[i][j]=='@')
        {
            hx=j;
            hy=i;
        }
    
    }
    getit(hx,hy,0);
}
//	return 0;
}