#include<stdio.h>

int greatest(int arr[])
{
 int n;
 int j=0;
 int max=arr[0];
 for(j=1;j<n;j++)
  {
   if(arr[j]>max)
   {
    max=arr[j];
   }
  return max;
 }
 
}

int main()
{
 int i=0,n;
 int arr1[100];
 printf("How many elements do you want to enter:\n");
 scanf("%d",&n);
 printf("Enter the elements of the array:\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&arr1[i]);
 }
 printf("The greatest element is:%d\n",greatest(arr1));
 return 0;
}
 
 
