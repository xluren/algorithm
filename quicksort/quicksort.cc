#include<iostream>
using namespace std;
void QuickSort(int a[],int left,int right)
{
	int i,j,tmp;
	if(left<right)
	{
		i=left-1;
		j=right;
		tmp=a[(left+right)/2];
		while(1)
		{
			while(a[++i]<tmp);
			while(a[--j]>tmp);
			if(i>=j)
				break;
			swap(a[i],a[j]);
		}
		QuickSort(a,left,i-1);
		QuickSort(a,j+1,right);
	}
}
int main()
{
	int a[]={1,3,5,7,9,2,4,6,8,0};
	QuickSort(a,0,sizeof(a)/sizeof(int));
	for(int i=0;i<sizeof(a)/sizeof(int);i++)
		cout<<a[i]<<"\t";
	cout<<endl;
	return 0;
}
