#include <cstdio>
#include <cmath>
int main()
{
    double sum=0;
    for(int i=1;;i++)
    {
        if(1/(2.0*i-1)<1e-6)
            break;
        sum+=1/(2.0*i-1)*pow(-1.0,1.0*(i-1));
    }
    printf("PI=%10.8f\n",4*sum);
    return 0;
}
