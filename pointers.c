#include <stdio.h>
int add(int a, int b)
{
    printf("Addition is %d\n", a+b);
}
int subtract(int a, int b)
{
    printf("Subtraction is %d\n", a-b);
}
int (*fun)(int a, int b);


int main()
{


    int  a , b ,i,j;
    scanf("%d %d",&a,&b);
    fun=add;
    i=fun(a,b);
    fun=subtract;
    j=fun(a,b);
}



