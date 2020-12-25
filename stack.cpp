#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int top=-1;

void push(int stack[],int x,int n)
{
    if(top==n-1)
    cout<<"overflow"<<endl;
    else
    {
        top=top+1;
        stack[top]=x;
        
    }
}
bool isEmpty()
{
    if(top==-1)
    return true;
    else 
    return false;
}
void pop()
{
    if(isEmpty())
    {
        cout<<"underflow condition"<<endl;
    }
    else
    {
        top=top-1;
    }
    
}
int topElement(int stack[ ])
{
    return stack[top];
}
int size()
{
    return top+1;
}
int main() {
	int stack[3];
	push(stack,5,3);
	push(stack,12,3);
	cout<<"size of stack "<<size()<<endl;
	
	push(stack , 12 , 3) ;// overflow
	cout<<"top element of stack "<<topElement(stack)<<endl;
	//removing elements;
	
	for(int i=0;i<3;i++)
	{
	    pop();
	    cout<<size()<<" ";
	}cout<<endl;
	pop();// underflow
	
	
	return 0;
}
