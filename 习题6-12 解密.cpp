#include<cstdio>
#include<cstring>
int main()
{
	char c[50];
	scanf("%s",c);
	for(int i=0;i<strlen(c);i++)
	{
		if(c[i]>=65&&c[i]<=90)
		{
			c[i]=26-(c[i]-65)+64;
		}
		else if(c[i]>=97&&c[i]<=123)
		{
			c[i]=26-(c[i]-97)+96;
		}
		
	}
	printf("%s",c);
    return 0;
}
