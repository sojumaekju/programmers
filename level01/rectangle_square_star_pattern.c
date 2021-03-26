#include <unistd.h>
#include <stdio.h>

void print_starPattern(int cols, int rows)
{
	int cnt;
	
	cnt = 0;
	while (cnt < cols * rows)
	{
		write(1, "*", 1);
		if ((cnt + 1) % cols == 0)
			write(1, "\n", 1);
		++cnt;
	}
}

int main(void)
{
	int inputCols;
	int inputRows;

	scanf("%d %d", &inputCols, &inputRows);
	print_starPattern(inputCols, inputRows);
	return (0);
}
