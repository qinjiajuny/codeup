#include<cstdio>
#include<cstring>
int main()
{
	char s1[10],s2[10];
	gets(s1);
	gets(s2);
	for(int i=0;i<10;i++)
	{
		if(s1[i]>s2[i])
		{
			printf("%d",s1[i]-s2[i]);
			break;
		}
		else if(s1[i]<s2[i])
		{
			printf("%d",s1[i]-s2[i]);
			break;
		}
		else if(s1[i]==s2[i])
			continue;
	}
	return 0;
}
