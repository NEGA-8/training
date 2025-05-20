 /*** #include <stdio.h>

int main()
{
     int n, i, sum;
     int arr[size];
     scanf("%d",&n);
     printf("Enter %d elements:\n", n);
     for(int i = 0;i < n; i++);
     

    return 0;
}




#include <stdio.h>

int main() {
    int n, i, sum = 0;
    int arr[100];  // Array size limit

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];  // Add each element to sum
    }

    printf("Sum of array elements = %d\n", sum);

    return 0;
} ***/
#include <stdio.h>
int main(){
    int size,sum=0;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    int avg=sum/size;
    printf("sum=%d\navg=%d",sum,avg);
    return 0;
}