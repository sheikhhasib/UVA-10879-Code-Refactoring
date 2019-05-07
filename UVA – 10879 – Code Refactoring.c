#include <stdio.h>
int main()
{
	int i,n,c,top,j;
	int res[2];
	scanf("%d",&c);
	for(i=1;i<=c;i++)
	{
		scanf("%d",&n);
		top = 0;
		for(j=2;top<2&&j*j<=n;j++)
			if(n%j==0)
				res[top++] = j;
		printf("Case #%d: %d = %d * %d = %d * %d\n",i,n,res[0],n/res[0],res[1],n/res[1]);
	}
	return 0;
}
