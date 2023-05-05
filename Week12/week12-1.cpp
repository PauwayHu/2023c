#include <stdio.h>
int main()
{
    int a=99, b=33;
    printf("%d %d\n",a,b);
    ///int temp=a;
    ///a=b;
    ///b=temp;
    a ^= b;
    b ^= a;
    a ^= b;

    printf("%d %d\n",a,b);
}
