#include <stdio.h>

long long int n;


int sqrt(long long int NUM){
	
	double PASS;
    double imsi;

    PASS = 0.5*(1 + (NUM / 1));

    while (1)
    {
        imsi = PASS;
        PASS = 0.5*(PASS + (NUM / PASS));

        if (imsi - PASS < 0.00001 || imsi - PASS < -0.00001)
        {
            break;
        }

    }
    PASS = (long long int)PASS;//요놈은 소수 부분 버리고 반올림
    return PASS;	
}

int main()
{
  scanf("%lld", &n);
  printf("%d\n", sqrt(n));
}
