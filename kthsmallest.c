#include<stdio.h>
int selectionsort(int arr[],int n,int k)
{
	int temp,min,i,j;
	for(i=0;i<k-1;i++)
	{
		min=i;
		for(j=i+1;j<n-1;j++)
		{
			if(arr[j]<arr[min])
			min=j;
		}
	temp=arr[i];
	arr[i]=arr[min];
	arr[min]=temp;
}
printf("%d",arr[k]);
}

int main()
{
int arr[100],n,k,i;
printf("enter the size of array\n");
scanf("%d",&n);
printf("enter the elements\n");
for(i=0;i<n;i++)
{
	scanf("%d",&arr[i]);
}
printf("enter the kth element\n");
scanf("%d",&k);
selectionsort(arr,n,k);
return 0;
}
