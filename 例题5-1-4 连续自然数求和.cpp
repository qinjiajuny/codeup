#include<cstdio>
int main()
{
	int N;
	int sum =0;
	scanf("%d",&N);

	
	for(int i =0;;i++)
	{
		sum+=i;
		if(i>=N)
			break;
	}
	printf("%d",sum);
	return 0;
}
