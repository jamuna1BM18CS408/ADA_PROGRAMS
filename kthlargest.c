#include<stdio.h>
int bubblesort(int arr[],int n,int k)
{
	int temp,i,j;
	for(i=0;i<k;i++)
	{
	
		for(j=0;j<n-1-i;j++)
		{
			if(arr[j+1]<arr[j])
		{
	temp=arr[j+1];
	arr[j+1]=arr[j];
	arr[j]=temp;
	}
}
printf("%d\n",arr[j]);
}
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
bubblesort(arr,n,k);
return 0;
}
