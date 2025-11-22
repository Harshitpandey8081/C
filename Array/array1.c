#include<stdio.h>

int main()
{
    int marks[5],i;
    printf("Enter Marks for 5 Subjects :");
    for(i=0;i<5;i++)
    {
        scanf("%d",&marks[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("%d\n",marks[i]);
    }
return 0;
}