#include<stdio.h>
int main()
{
	int count=0,x,arr[100],n,key,i,start,end;
        printf("enter the size of array\n");
	scanf("%d",&n);
	start=1,end=n;
	printf("enter the elements");
	for(i=0;i<n;i++)
	{
           scanf("%d",&arr[i]);
	}
        printf("enter the key:");
        scanf("%d",&key);
       
         
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
              x=i;     
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
return 0;
}
}

