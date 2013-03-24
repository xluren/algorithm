#include<iostream>
using namespace std;
int kth_elem(int a[],int low,int high,int k )
{
	int key_num=a[low];
	int low_tmp=low;
	int high_tmp=high;
	while(low<high)
	{
		while(low<high&&a[high]>=key_num)
			--high;
		a[low]=a[high];
		while(low<high&&a[low]<key_num)
			++low;
		a[high]=a[low];
	}
	a[low]=key_num;
	if(low==k-1)
		return a[low];
	else if(low>k-1)
		return kth_elem(a,low_tmp,low-1,k);
	else 
		return kth_elem(a,low+1,high_tmp,k);
}
int main()
{
	int a[100];
	for(int i=0;i<100;i++)
		a[i]=i+1;
	cout<<kth_elem(a,0,99,50)<<endl;
	return 0;
}
