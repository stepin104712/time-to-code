#include <stdio.h>
void add(int a, int b)
{
    printf("Addition is %d\n", a+b);
}
void subtract(int a, int b)
{
    printf("Subtraction is %d\n", a-b);
}


int main()
{

    int(*fun)(int, int);
    int  a , b ,i,j;
    scanf("%d %d",&a,&b);
    fun=add;
    i=fun(a,b);
    fun=subtract;
    j=fun(a,b);
}




