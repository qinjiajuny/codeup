#include<cstdio>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int *x=&a,*y=&b,*z=&c;
	int temp;
	if(*x<*y)
	{
		temp = *x;
		*x=*y;;
		*y=temp;
	}
	 if(*x<*z)
	{
		temp = *x;
		*x=*z;;
		*z=temp;
	}
	 if(*y<*z)
	{
		temp = *y;
		*y=*z;;
		*z=temp;
	}
	printf("%d %d %d\n",a,b,c);
	return 0;
}
