#include <stdio.h>
#include <stdbool.h>
voidsort(int x []){
    int n = sizeof(x)/sizeof(x[0]);
    for(int i=0;i<n-1;i++){
        for(int j = 0;j<n-1;j++){
            if(x[j]>x[j+1]){
                int t=x[j];
                x[j]=x[j+1];
                x[j+1]=t;
            }
        }
    }
    //printf("%d\n",r);
    return 0;
}
    int main(){
        int arr[]={1,2,13,4,15};
        int c=7;
        
    }
