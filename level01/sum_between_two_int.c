#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int a, int b)
{

	long long sum;
	long long cnt;
	
	sum = 0;
	cnt = 0;
	if (a > b) 
	{
		while (cnt < a - b + 1)
		{
			sum += (b + cnt);
			cnt++;
		}
	}
	else if (a < b)
	{
		while (cnt < b - a + 1)
		{
			sum += (a + cnt);
			cnt++;
		}
	}
	else sum = a;
	return (sum);
}

int main(void)
{
	int a = 10;
	int b = 20;
	
	printf("%lld", solution(a, b));
	return (0);
}

/*
 * long long solution(int a, int b)
 * {
 * if ( a == b) return (a);
 *
 * int sum;
 * int num;
 *
 * sum = a + b;
 * num = b - a + 1;
 *
 * if (a > b) // if a is greater, replace num.
 * num = a - b + 1;
 *
 * return (long long) sum * sum / 2;
 * //cast the number type 
 * }
 */
