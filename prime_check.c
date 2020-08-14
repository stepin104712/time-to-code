#include<stdio.h>

int prime(int);

main()
{
   int n, result;

   scanf("%d",&n);

   result = prime(n);

   if ( result == 1 )
      printf("%d is prime.\n", n);
   else
      printf("%d is not prime.\n", n);

   return 0;
}

int prime(int a)
{
   int i;

   for ( i = 2 ; i <= a - 1 ; i++ )
   {
      if ( a%i == 0 )
     return 0;
   }
   return 1;
}
