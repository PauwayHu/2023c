#include <stdio.h>
int main()
{
	int w,c;
	scanf("%d%d",&w,&c);
	int ans =w/c;
	if(w%c>0) ans++;
	printf("%d",ans);
}
//¤ôªM±µ¤ô
