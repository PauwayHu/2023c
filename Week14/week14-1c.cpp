#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a<b){
		int t=a;
		a=b;
		b=t;
	}
	if(b<c){
		int t=b;
		b=c;
		c=t;
	}
	if(a<b){
		int t=a;
		a=b;
		b=t;
	}
	printf("%d",a*100+b*10+c+1);
}
//�T�ƲզX
