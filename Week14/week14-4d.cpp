#include <stdio.h>
int main()
{
	int a,b,n;
	scanf("%d",&a);
	if(a>=10000) n=5;
	else if(a>=1000) n=4;
	else if(a>=100) n=3;
	else if(a>=10) n=2;
	else n=1;
	for(int i=0;i<n;i++){
		b=a%10;
		a=a/10;
		for(int j=0;j<i;j++){
			b=b*10;
		}
		printf("%d ",b);
	}
}
//拆解輸入的正整數
