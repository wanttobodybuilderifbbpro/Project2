#include <stdio.h>
int main(void)
{
	int a, b, sum, sub;

	printf("두 정수를 입력하세요 : ");
	scanf("%d%d", &a, &b);

    sum = a + b;		
    sub = a - b;

	printf("합 : %d + %d = %d\n", a, b, sum);
	printf("차 : %d - %d = %d\n", a, b, sub);

	return 0;	
}