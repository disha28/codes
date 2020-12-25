#include <bits/stdc++.h>
using namespace std;

int freq[26];

int hashFunc(char c)
{
    return (c-'a');
}

void countF(string s)
{
    for(int i=0;i<s.size();i++)
    {
        int index=hashFunc(s[i]);
        freq[index]++;
    }
    
    for(int i=0;i<26;i++)
    cout<<char('a'+i)<<" "<<freq[i]<<endl;
}



int main() {
    
   string s;
   cin>>s;
   countF(s);
	return 0;
}