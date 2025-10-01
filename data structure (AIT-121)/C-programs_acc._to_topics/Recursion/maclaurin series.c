# include <stdio.h>
#include <math.h>

void main ()
{
   int x,i;
   int fact = 1,n;
   float sum = 0;

   printf("Enter a value : ");
   scanf("%d",&x);

   printf("Enter no.of terms : ");
   scanf("%d",&n);

   for(i=1;i<n;i++)
   {
       fact = fact*i;
       sum += (pow(x,i)/fact);
   }
   sum = sum + 1;
   printf("Answer : %f",sum);
}
