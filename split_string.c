#include <string.h>
#include <stdio.h>

int main () {
   char str[] = "my_name_is_edcast_future_skills";
   const char s[] = "_";
   char *sub;


   sub = strtok(str, s);


   while( sub != NULL ) {
      printf( "%s", sub );
      printf("\n");

      sub = strtok(NULL, s);
   }

   return(0);
}
