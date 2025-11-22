// wap to enter 25 int elements,sort them and then find out the center element

#include<stdio.h>
int main()
{
    int x;
    printf("Enter number of elements:");
    scanf("%d",&x);
    int arr[x],i,j,buble,y;
    printf("enter %d elements :\n",x);
    for(i=0;i<x;i++)
    {
        scanf("%d",&arr[i]);
    }
     printf("elements entered in Asc Order :\n");
    for(i=0;i<x;i++)
    {
        printf("%d\n",arr[i]); 
    }
    for(i=0;i<x;i++)
    {
        for(j=i+1;j<x;j++)
        {
            if(arr[i]>arr[j])
            {
                buble=arr[i];
                arr[i]=arr[j];
                arr[j]=buble;
            }
        }
    }
    
    if(x%2==0)
    {
        y=x/2;
        printf("center elements are : %d\n %d\n",arr[y],arr[y+1]);
    }
    else
    
    {
       y=x/2;
        printf("center elements is : %d\n",arr[y]); 
    }
   
}