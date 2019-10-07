#include<cstdio>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	int *p=&a,*q=&b;
	printf("%d %d\n",*p>*q?*p:*q,*p<*q?*p:*q);
	return 0;
}
