#include<cstdio>
int main()
{
	double i=2.0;
	double j=1.0;
	double sum=0;
	double t;
	for(int z=0;z<20;z++)
	{
		sum+=i/j;
		t=j;
		j=i;
		i=t+i;
	}
	printf("%f",sum);
	
	return 0;
	
}
