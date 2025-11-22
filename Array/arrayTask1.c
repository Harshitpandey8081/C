//Wap to enter Elements in array and find smallest and largest element
#include<stdio.h>
int main()
{
    int el[10],i,sel,res,sm,lg;
    
    printf("Enter All 10 Elements:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&el[i]);
    }
    sm=lg=el[0];
    for(i=0;i<10;i++)
    {
        if(sm>el[i])
        {
            sm=el[i];
        }
        if(lg<el[i])
        {
            lg=el[i];
        }
    }
    
printf("Smallest element is = %d\nLargest Element is = %d",sm,lg);
    return 0;
}