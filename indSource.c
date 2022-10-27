#include <stdio.h>
#include <locale.h>

void main()
{
	int x;
	setlocale(0, "");
	printf("Введиите цифру от 1 до 9:\n");
	scanf("%d", &x);
	switch (x)
	{
	case 1:
		printf("Раз");
		break;
	case 2:
		printf("Раз,два");
		break;
	case 3:
		printf("Раз,два,три");
		break;
	case 4:
		printf("Раз,два,три,четыре");
		break;
	case 5:
		printf("Раз,два,три,четыре,пять");
		break;
	case 6:
		printf("Раз,два,три,четыре,пять,шесть");
		break;
	case 7:
		printf("Раз,два,три,четыре,пять,шесть,семь");
		break;
	case 8:
		printf("Раз,два,три,четыре,пять,шесть,семь,восемь");
		break;
	case 9:
		printf("Раз,два,три,четыре,пять,шесть,семь,восемь,девять");
		break;
	}
}
