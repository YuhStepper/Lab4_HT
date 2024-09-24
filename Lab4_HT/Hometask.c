#include<locale.h>
#include<stdio.h>

void main()
{
	setlocale(LC_CTYPE, "RUS");
	int sum;
	puts("¬ведите сумму, которую ёра получает в неделю: ");
	scanf("%d", &sum);
	int x;
	x = sum / 4;
	int save;
	save = x / 3;

	printf("—умма, которую ёра накопит за год будет равна %d", save * 4 * 12);
}