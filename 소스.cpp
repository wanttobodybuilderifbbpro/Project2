#include <stdio.h>
int main(void)
{
	int a, b, sum, sub;

	printf("�� ������ �Է��ϼ��� : ");
	scanf("%d%d", &a, &b);

    sum = a + b;		
    sub = a - b;

	printf("�� : %d + %d = %d\n", a, b, sum);
	printf("�� : %d - %d = %d\n", a, b, sub);

	return 0;	
}