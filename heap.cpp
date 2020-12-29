// HEAP

#include <bits/stdc++.h>
using namespace std;

void swap(int *x,int *y)
class minheap
{
    int *harr;
    int capacity;
    int heap_size;
    
    public:
    minheap(int capacity);
    void minheapify(int);
    int parent(int i)
    {
        return (i-1)/2;
    }
    int left(int i)
    {
        return (2*i+1);
    }
    int right(int i)
    {
        return (2*i+2);
    }
    
    int extractmin();
    void decreasekey(int i,int new_val);
    
    int getmin()
    {
        return harr[0];
    }
    
    void deletekey(int i);
    
    void insertkey(int k);
};

//initialize the constructor
minheap::minheap(int cap)
{
    heap_size=0;
    capacity=cap;
    harr=new int[cap];
}
void minheap::insertkey(int k)
{
    if(heap_size==capacity)
    {
        cout<<"overflow";
    }
    
    heap_size++;
    int i=heap_size-1;
    harr[i]=k;
    
    while(i!=0&&harr[parent(i)]>harr[i])
    {
        swap(&harr[i],&harr[parent(i)]);
        i=parent(i);
    }
    
}
void minheap::decreasekey(int i,int new_val)
{
    harr[i]=new_val;
    while(i!=0&&harr[parent(i)]>harr[i])
    {
        swap(&harr[i],&harr[parent(i)]);
        i=parent(i);
    }
}

int minheap::extractmin()
{
    if(heap_size<=0)
    return INT_MAX;
    
    if(heap_size==1)
    {
        heap_size--;
        return harr[0];
    }
    
    int root=harr[0];
    harr[0]=harr[heap_size-1];
    heap_size--;
    minheapify(0);
    
    return root;
}

void minheap::deletekey(int i)
{
    decreasekey(i,INT_MAX);
    extractmin();
}

void minheap::minheapify(int i)
{
    int l=left(i);
    int r=right(i);
    int smallest=i;
    if(l<heap_size&&harr[l]<harr[i])
    smallest=l;
    if(r<heap_size&&harr[r]<harr[i])
    smallest=r;
    
    if(smallest!=i)
    {
        swap(&harr[i],&harr[smallest]);
        minheapify(smallest);
    }
    
}
void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

int main() {
	
	
	return 0;
}