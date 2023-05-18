#include <stdio.h>
int main()
{
	int n,a[20];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		printf("%d,",a[i]*a[i]);
	}
	printf("\n");
}
//計算陣列的平方值
