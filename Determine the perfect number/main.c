#include <stdio.h>
#include <stdlib.h>

int main()
{
 int a;
 int divisor=1;
 int sum=0;
 printf("Pls enter a number:");
 scanf("%d",&a);
 while(divisor<a)
 {
     if (a%divisor==0)
  {
        sum=sum+divisor;
        divisor=divisor+1;
  }
     else if (a%divisor!=0)
   {
        sum=sum;
        divisor=divisor+1;
   }
  }

   if (sum==a)
    printf("It's a perfect number");
  else if (sum!=a)
    printf("It's not a perfect number");
 return 0;

}
