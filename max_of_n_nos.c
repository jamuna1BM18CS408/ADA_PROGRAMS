#include <stdio.h>

int main()
{
	int a[10],i,larg,n;
	larg=0;
	printf("enter the value of n\n");
	scanf("%d",&n);
	printf("enter n values\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	for(int j=0;j<n;j++)
		for(int k=j+1;k<n;k++)
	{
		if(a[j]>a[k])
		  {
			larg=a[j];
		 }
	else
		{
			larg=a[k];
			
		  }
		  
	}
	printf("max=%d",larg);
}
