#include<cstdio>
#include<cstring>
int main()
{
	char a[3][10];
	int i;
	for(i=0;i<3;i++)
	{
		gets(a[i]);
	}
	
	int max = 0;
	for( i=0;i<3;i++)
	{
		if(strcmp(a[max],a[i])<0)
		max = i;
	}
	printf("%s",a[max]);
	return 0;
}
