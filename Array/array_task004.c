/*Find Min and Max: Identify the smallest and largest numbers in array.  */     
#include<stdio.h>
#include "fill_array.c"
int main()
{
    int x;
    printf("Enter Size Of ther Array: ");
    scanf("%d",&x);
    int arr[x];
    fill_array(arr,x);
    get_array(arr,x);
    
}
/*Find the second-largest element in an array.

Frequency Count: Count how many times each element appears in the array.

Separate Odd/Even: Move all even numbers to one side and odd numbers to the other
Sort an array.
*/