//wap to enter 5 element and update each odd index value by one (e.g value+1)
#include<stdio.h>
int main()
{
    int arr[5],i;
    printf("Enter value of 5 elements :\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0;i<5;i+=2)
    {
        arr[i]=arr[i]+1;
    }
    printf("\nUpdated values:\n");
     for(i=0;i<5;i++)
    {
        printf("%d\n",arr[i]);
    }return 0;
}