#include <stdio.h>
int main()
{
	int a,b,c=0;
	scanf("%d%d",&a,&b);
	for(int i=a;i<=b;i++){
		int p=1;
		for(int k=2;k<i;k++){
			if(i % k == 0){
				p=0;
			}
		}
		if(p == 1){
			c++;
		}
	}
	printf("%d\n",c);
}
//計算質數個數
