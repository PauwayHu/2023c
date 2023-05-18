#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a>10000) printf("%d",(a%10000)/1000);
	else printf("%d",a/1000);
}
//§ä¤d¦ì¼Æ
