#include<stdio.h>
#include "fill_array.c"
void bubble_sort(int arr[], int n) ;
int main()
{
  int x;
    printf("Enter number of elements:");
    scanf("%d",&x);
    int arr[x],i,j,buble,y;
    fill_array(arr,x);
    printf("elements entered in Asc Order :\n");
    bubble_sort(arr,x);
    get_array(arr,x);
    
}
void bubble_sort(int arr[], int n) 
{
    int i, j, temp;
   for(i=0;i<n-1;i++)
   {
        for(j=0;j<i-1;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[j];
                arr[i ]=arr[j];
                arr[j]=temp;
            }
        }
   }
}