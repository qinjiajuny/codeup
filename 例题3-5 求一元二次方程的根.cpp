#include<cstdio>
int main()
{
	double a,b,c,r1,r2;
	scanf("%lf%lf%lf",&a,&b,&c);
	
	double detla = b*b-4*a*c;
	r1 = (-b+detla)/(2*a);
	r2 = (-b-detla)/(2*a);
	if(detla<0)
	{
		printf("No real roots!");
	}
	else{

	printf("r1=%7.2f\n",r1);
	printf("r2=%7.2f\n",r2);
}
	
	

	return 0;
 } 
