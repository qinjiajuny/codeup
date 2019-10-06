#include<cstdio>
int main()
{
	int a[20];
	a[0]=1;
	 a[1]=1;
	int i ;
	for(i=2;i<20;i++)
	{
		a[i]=a[i-2]+a[i-1];
	}
	for(i=0;i<20;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
