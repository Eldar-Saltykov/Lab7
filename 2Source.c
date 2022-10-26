#include <stdio.h>
#include <locale.h>
#include <math.h>

void main()
{
	double x, y;
	char c;
	setlocale(LC_ALL, "RUS");
	printf("Выберите тип операции '+' '-' '*' '/'\n");
	scanf("%c", &c);
	printf("Введите число 1\n");
	scanf("%lf", &x);
	printf("Введите число 2\n");
	scanf("%lf", &y);
	

	switch (c)
	{
	case '+':
		printf("%.2lf+%.2lf=%lf",x,y, x + y);
		break;
	case '-':
		printf("%.2lf-%.2lf=%lf", x, y, x - y);
		break;
	case '*':
		printf("%.2lf*%.2lf=%lf", x, y, x * y);
		break;
	case '/':
		printf("%.2lf/%.2lf=%lf", x, y, x / y);;
		break;
	default:
		printf("Ошибка! Неизвестное действие.\n");
	}

	return 0;
}
