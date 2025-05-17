#include <stdio.h>

int main()
{
   int x,y,temp;
   scanf("%d", &x);
   scanf("%d", &y);
   temp = x;
   x = y;
   y = temp;
   printf("the number:\n");
   printf("x = %d\n", x);
   printf("y = %d\n", y);
   return 0;
}


