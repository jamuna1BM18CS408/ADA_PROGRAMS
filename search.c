#include<stdio.h>
int main()
{
	int n,a[10],i,j,key;
	printf("enter the size of array\n");
	scanf("%d",&n);
	printf("enter the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the key element\n");
	scanf("%d",&key);
	for(j=0;j<n;j++)
	{
			if(a[j]==key)
			{
				printf("1");
				return 0;
			}
}
	
			
				printf("-1");
			
		
}
