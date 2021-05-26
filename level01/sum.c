long long solution(int a, int b)
{
	if (a == b) return (a);

	int sum;
	int num;

	sum = a + b;
	num = b - a + 1;

	if (a > b)
		num = a - b + 1;

	return (long long) sum * num / 2;
}
