#include <stdio.h>
int main()
{
	int a[10];
	int b=1000,c;
	for(int i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<10;i++){
		if(a[i]<b){
			b=a[i];
			c=i+1;
		}
	}
	printf("%d %d\n",c,720*6/b);
}
//區間測速-超速之王
