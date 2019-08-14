#include<stdio.h>

int findsqrt(int x)
{
if(x==0||x==1)
  {
	return x;
  }
int start=1,end=x,result;

while(start<=end)
{
     int mid=(start+end)/2;
     if(mid*mid==x)
	{
	    return mid;
        }
     if(mid*mid<x)
	{
           start=mid+1;
	   result=mid;
	}
     else
         end=mid-1;
}
return result;
}

int main()
{
	int x;
	printf("enter x:\n");
	scanf("%d",&x);
	printf("%d",findsqrt(x));
}














