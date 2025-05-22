#include <stdio.h>
#include <stdbool.h>
int main(){
    int a = 10;
    int * p,**p1,***p2,****p3;
        p=&a;
        p1=&p;
        p2=&p1;
        p3=&p2;
    printf("%d %d %d %d",p,p1,p2,p3);
   return 0;
   }
   
   
  