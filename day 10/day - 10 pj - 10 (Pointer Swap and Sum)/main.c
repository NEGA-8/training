#include <stdio.h>
#define z 50
void swap(int*a,int*b){
     int t = *a;
     *a=*b;
     *b=t;
}
int main()
{
    int a=5,b=10;
    int *p=&a, *q=&b;
    int sum = *p+*q;
    printf("%d",sum);
    return 0;
}
