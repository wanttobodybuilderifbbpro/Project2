#include <stdio.h>
int main(void)
{
	int year = 0;
	int month = 0;
	int day = 0;

	printf("��������� �Է��ϼ���(yy/mm/dd) : ");
	scanf("%d%d%d", &year, &month, &day);

	printf("����� %d�� %d�� %d�Ͽ� �¾���ϴ�. \n", year, month, day);

	return 0;	
}