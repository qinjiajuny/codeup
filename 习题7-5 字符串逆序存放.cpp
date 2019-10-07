#include<cstdio>
#include<cstring>
int main()
{
	char c[10];
	gets(c);
	int i;
	for(i=strlen(c)-1;i>=0;i--)
	{
		printf("%c",c[i]);
	}
	return 0;
}
