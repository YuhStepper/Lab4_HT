#include<locale.h>
#include<stdio.h>

void main()
{
	setlocale(LC_CTYPE, "RUS");
	int sum;
	puts("������� �����, ������� ��� �������� � ������: ");
	scanf("%d", &sum);
	int x;
	x = sum / 4;
	int save;
	save = x / 3;

	printf("�����, ������� ��� ������� �� ��� ����� ����� %d", save * 4 * 12);
}