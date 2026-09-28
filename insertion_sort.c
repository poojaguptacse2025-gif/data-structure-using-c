#include<stdio.h>
void main()
{
   int ar[7];
   int key;
   int i,j;
   int temp;
   printf("\nEnter 7 elements for sorting with Insertion sort\n");
   for(i=0;i<7;i++)
   {
      scanf("%d",&ar[i]);
   }
   for(j=1;j<7;j++)
   {
      key=ar[j];
      i=j-1;
      while((i>=0)&&(ar[i]>=key))
      {
         temp=ar[i+1];
         ar[i+1]=ar[i];
         ar[i]=temp;
         i=i-1;
      }
      ar[i+1]=key;
   }
   printf("\nElements after sorting with Insertion sort \n");
   for(i=0;i<7;i++)
   {
      printf("%d  \n",ar[i]);
   }
}