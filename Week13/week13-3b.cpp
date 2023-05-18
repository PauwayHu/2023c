#include <stdio.h>
int main()
{
	int a,b,c=0;
	scanf("%d",&a);
	for(int i=0;i<=a;i++){
		b=i*i;
		c=c+b;
	}
	printf("%d",c);
}
//正整數平方總和
