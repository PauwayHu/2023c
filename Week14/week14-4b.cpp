#include <stdio.h>
int main()
{
	int a,b=0,c;
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		b=b+i;
		c=i;
		if(b>a) break;
	}
	printf("%d",c);
}
//大於漸增數列總和之最小整數
