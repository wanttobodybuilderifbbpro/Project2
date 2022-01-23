#include <stdio.h>

int main(void)
{
	int a, b, c;
	int result1, result2;

	printf("input a : ");
	scanf("%d", &a);

	printf("input b : ");
	scanf("%d", &b);

	printf("input c : ");
	scanf("%d", &c);

	if (a > b) {
		result1 = a;
	}
	else {
		result1 = b;
	}

	if (result1 > c) {
		result2 = result1;
	}
	else {
		result2 = c;
	}

	printf("%d \n", result2);

	return 0;
}