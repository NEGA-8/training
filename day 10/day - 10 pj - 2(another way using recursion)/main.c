#include <stdio.h>
#include <stdbool.h>

bool prefect(int x){
        int sum=0;
        for(int i=1;i<x;i++){
            if(x%i==0)  sum=sum+i;
        }
        return sum==x;
    }
    int main()
    {
        int x;
        scanf("%d",&x);
        bool a= prefect(x);
        printf("%s",a?"true":"false");
        return 0;
    }
