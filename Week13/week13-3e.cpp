#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int ans=0;
	for(int i=1;i<=n;i++){
		if(n%i==0) ans += i;
	}
	printf("%d",ans);
}
//輸入n (n>0)， 求n之所有因數和
