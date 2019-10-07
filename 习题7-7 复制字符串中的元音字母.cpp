#include<cstdio>
#include<cstring>
void vowels(char s1[]);

int main()
{
	char s1[20];
	gets(s1);
	
	vowels(s1);
	
	
	return 0;
}
void vowels(char s1[])
{
	int i;
	for(i=0;i<strlen(s1);i++)
	{
		if(s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u'||s1[i]=='A'||s1[i]=='E'||s1[i]=='I'||s1[i]=='O'||s1[i]=='U')
				printf("%c",s1[i]);
	}
}

