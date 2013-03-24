#include<iostream>
using namespace std;
void minheap(int heap[],int i,int len)
{
	int minindex=-1;
	int left=2*i;
	int right=2*i+1;
	if(left<=len&&heap[left]<heap[i])
		minindex=left;
	else
		minindex=i;
	if(right<len&&heap[right]<heap[minindex])
		minindex=right;
	if(minindex!=i)
	{
		swap(heap[minindex],heap[i]);
		minheap(heap,minindex,len);
	}
}
void buildheap(int heap[],int len)
{
	if(heap==NULL)
		return ;
	for(int index=len/2;index>=1;index--)
		minheap(heap,index,len);
}
int main()
{
		int *heap=new int [11];
		int size=10;
		for(int i=1;i<=10;i++)
			heap[i]=10-i;
		buildheap(heap,10);
/*		for(int i=10;i>=2;i--)
		{
			int temp=heap[i];
			heap[i]=heap[1];
			heap[1]=temp;
			size--;
			minheap(heap,1,size);
		}*/
		for(int i=1;i<11;i++)
			cout<<heap[i]<<"\t";
		cout<<endl;
		return 1;
}
