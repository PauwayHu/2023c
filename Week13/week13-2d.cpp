#include <stdio.h>
int main()
{
	int a,b=0;
	scanf("%d",&a);
	if(a/1000 == 1)
	{
		b=b+8;
		a=a-1000;
	}
	if(a/100 == 1)
	{
		b=b+4;
		a=a-100;
	}
	if(a/10 == 1)
	{
		b=b+2;
		a=a-10;
	}
	if(a == 1)
	{
		b=b+1;
	}
	printf("%d\n",b);
}
//2進位轉10進位
