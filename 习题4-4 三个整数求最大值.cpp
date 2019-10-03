#include<cstdio>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int max = a;
	if(b>a)
		max = b;
	else if(c>a)
		max = c;
	if(c>b)
		max = c;
	printf("%d\n",max);
	return 0;
}
