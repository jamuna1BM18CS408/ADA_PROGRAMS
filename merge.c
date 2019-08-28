#include<stdio.h>
 
void mergesort(int a[],int i,int j);
void merge(int a[],int i1,int j1,int i2,int j2);
 
int main()
{
	int a[30],n,i;
	printf("Enter no of elements:");
	scanf("%d",&n);
	printf("Enter array elements:");
	
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		
	mergesort(a,0,n-1);
	
	printf("\nSorted array is :");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	return 0;
		
}
 
void mergesort(int a[],int low,int high)
{
	int mid;
		
	if(low<high)
	{
		mid=(low+high)/2;
		mergesort(a,low,mid);		
		mergesort(a,mid+1,high);	
		merge(a,low,mid,mid+1,high);	
	}
}
 
void merge(int a[],int i1,int low,int i2,int high)
{
	int temp[50];	
	int i,j,k,count=0;
	i=i1;	
	j=i2;	
	k=0;
	
	while(i<=low && j<=high)	
	{	count++;
		if(a[i]<a[j])
			temp[k++]=a[i++];
		else
			temp[k++]=a[j++];
	}
	
	while(i<=low)	
		{
			temp[k++]=a[i++];
		}
		
	while(j<=high)	
		{
			temp[k++]=a[j++];
		}
		
	
	for(i=i1,j=0;i<=high;i++,j++)
		{
			a[i]=temp[j];
		}
	printf("number of comparisions=%d",count);
}
