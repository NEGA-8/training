#include <stdio.h>

int main()
{
   int x, y;
   scanf("%d", &x);
   scanf("%d", &y);

   x = x + y;  
   y = x - y; 
   x = x - y;  

   printf("the number:\n");
   printf("x = %d\n", x);
   printf("y = %d\n", y);
   
   return 0;
}
