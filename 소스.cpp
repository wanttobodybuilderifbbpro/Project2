// variable - ���� �� �ִ� ������
// constant - ���� �� ���� ������


 //  - ���� (����) 


// && = ��ΰ� true ����   true ����;
// || = ��ΰ� false ���߸� false ������
// ! = � ����� �����f ���� / �ݴ븦 ��Ÿ��



// if ~ �̸� ~��. �׷��� �� ������� ������ ~ printf ����Ѵ�
// else if -> if �ߴµ� �� �´�. �Ʒ��� ���������ϱ� �� ������ �ִ� ������~ else if�� �°� ����Ѵ�
// else -> if �� �ƴϰ� else if �� �ƴϸ�~ else ����Ѵ�. 


//Q1. add �Լ��� ���� ���� ��� add(5,6) �̷� ��Ȳ�̸� �˾Ƽ� 5�� 6�� �����ִ� ��Ȳ�� ������� ��� �ؾ� �ϴ°�?

#include <stdio.h>
#include <string.h>

int main() {

	char str[] = "This is a sample string";
	char* pch;
	printf("Looking for the 's' character in \"%s\"... \n", str);
	pch = strchr(str, 's');
	while (pch != NULL) {
		printf("found at %d\n", pch - str + 1);
		pch = strchr(pch + 1, 's');
	}

	return 0;

}