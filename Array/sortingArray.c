//wap to enter 10 int element and short them in asc order
#include<stdio.h>
int main()
{
    int arr[10],i,j,buble;
    printf("enter 10 elements :");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    
     printf("elements entered :");
    for(i=0;i<10;i++)
    {
        printf("%d\n",arr[i]);
    }
     printf("elements entered in Asc Order :");

    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(arr[i]>arr[j])
            {
                buble=arr[i];
                arr[i]=arr[j];
                arr[j]=buble;
            }
        }
    }
    
    for(i=0;i<10;i++)
    {
        printf("%d\n",arr[i]);
    }
}