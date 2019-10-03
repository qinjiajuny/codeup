#include<cstdio>
int main()
{
	int a[10];
	int i;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	int temp=a[9];
	i=8;
	while(a[i]>temp)
	{
		a[i+1]=a[i];
		--i;
	}
	a[i+1]=temp;
	for(int j=0;j<10;j++)
		printf("%d\n",a[j]);

}
