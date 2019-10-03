#include<cstdio>
int main()
{
	int N,sum;
	for(N=1,sum=0;;N++)
	{
		sum+=N;
		if(sum>1000)
			break;
	}
	printf("%d",N);
	return 0;
}
