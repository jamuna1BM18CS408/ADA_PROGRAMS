#include<stdio.h>
void quicksort(int arr[25],int low,int high)
{
   int i, j, pivot, temp;

   if(low<high){
      pivot=low;
      i=low;
      j=high;

      while(i<j){
         while(arr[i]<=arr[pivot]&&i<high)
            i++;
         while(arr[j]>arr[pivot])
            j--;
         if(i<j){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
         }
      }

      temp=arr[pivot];
      arr[pivot]=arr[j];
      arr[j]=temp;
      quicksort(arr,low,j-1);
      quicksort(arr,j+1,high);

   }
}

int main(){
   int i, n, arr[25];

   printf("enter size: ");
   scanf("%d",&n);

   printf("Enter elements: ");
   for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

   quicksort(arr,0,n-1);

   printf("Sorted elements: ");
   for(i=0;i<n;i++)
      printf(" %d",arr[i]);

   return 0;
}
