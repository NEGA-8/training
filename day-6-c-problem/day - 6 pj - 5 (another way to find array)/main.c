#include <stdio.h>
#include <limits.h>

int main()
{
   int arr[]={-1,-2,-3,-4};
   int max=INT_MIN;
   int length=sizeof(arr)/sizeof(arr[0]);
   for(int i=0;i<=length-1;i++){
       if(max < arr[i]) max=arr[i];
   }
    printf("%d",max);
    return 0;
}
