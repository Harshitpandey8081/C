#include<stdio.h>
void fill_array(int ar[],int a);
void get_array(int ar[],int a);
//int main()
// {
//     int x;
//     printf("Enter Size Of ther Array: ");
//     scanf("%d",&x);
//     int arr[x];
//     fill_array(arr,x);
//     printf("Array entered:");
//     get_array(arr,x);

// }

void fill_array(int ar[],int a)
{
    int b; 
    printf("Enter Values :");
    for(b=0;b<a;b++)
    {
        scanf("%d",&ar[b]);
    }
}

void get_array(int ar[],int c)
{
    int d;
    for(d=0;d<c;d++)
    {
        printf("%d\n",ar[d]);
    }
}

