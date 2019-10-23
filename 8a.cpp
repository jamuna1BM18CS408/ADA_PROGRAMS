#include <iostream>
using namespace std;

void checkheap(int arr[],int n)
{
	int s,f,element;
	for(int i=1;i<=n/2;i++)
		{
			f=i;
			element=arr[f];
			s=2*f;
			if(s<n)
			{
				if(arr[s]<element && arr[s+1]<element)
				{
					continue;
				}
			else
			{
				cout<<"false";
				break;
			}
			}
			if(s<=n)
			{
				if(arr[s]<element)
					continue;
			}
			else
			{
				cout<<"false";
				break;
			}
		}
	cout<<"true";
}
int main()
{
	int arr[10],n;
	cout<<"enter the size\n";
	cin>>n;
	cout<<"enter array";
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
	}
	checkheap(arr,n);
	return 0;
}
