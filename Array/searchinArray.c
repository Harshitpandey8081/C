//Topic: accessing and manupulating single dimensional array
//Wap to enter 20 Elements in array and also enter search element and check whether element is exist or not
#include<stdio.h>
int main()
{
    int el[20],i,sel,res,sm,lg;
    printf("Enter All 20 Elements:");
    for(i=0;i<20;i++)
    {
        scanf("%d",&el[i]);
    }
    printf("Enter Element to search:");
    scanf("%d",&sel);
    for(i=0;i<20;i++)
    {   
        if(sel==el[i])
        {
            res=1;
            break;
        }
        
    }
    if(res==1)
    {
        printf("Element Exist!");
    }
    else
    {
        printf("Element does not Exist!");

    }
    return 0;
}