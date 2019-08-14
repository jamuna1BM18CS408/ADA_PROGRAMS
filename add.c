#include<stdio.h>
int binarysearch(int arr[],int n,int key)
{
	int start=0,end=n,result,count=0,i,x;
        for(i=0;i<n;i++)
{
	if(start<end)
	{
	  int mid=start+end/2;
	  if(arr[i]==key)
	  {
            if(count==0)
              printf("%d",i);
              count++;
              x=1;
            	    
       
          }
          
          else if(arr[i]<key)
	  {
            end=mid-1;
	  }
           else
	  {
	   start=mid+1; 
         }
}
}
if(count==0)
{
printf("0 0 -1");
}
else
{
printf("%d%d",x,count);
}
}

int main()
{
	int arr[100],n,k,i;
        printf("enter the size of array\n");
	scanf("%d",&n);
	printf("enter the elements");
	for(i=0;i<n;i++)
	{
           scanf("%d",&arr[i]);
	}
        printf("enter the key:");
        scanf("%d",&k);
        binarysearch(arr,n,k);
}            
