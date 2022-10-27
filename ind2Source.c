#include <stdio.h>
#include <locale.h>
void main()
{
	int x;
	setlocale(LC_ALL,"RUS");
	printf("Введиите число от 1 до 13:\n");
	scanf("%d", &x);
	switch (x)
	{
	case 1:
		printf("Один");
		break;
	case 2:
		printf("Два");
		break;
	case 3:
		printf("Три");
		break;
	case 4:
		printf("Четыре");
		break;
	case 5:
		printf("Пять");
		break;
	case 6:
		printf("Шесть");
		break;
	case 7:
		printf("Семь");
		break;
	case 8: 
		printf("Восемь");
		break;
	case 9:
		printf("Девять");
		break;
	case 10:
		printf("Десять");
		break;
	case 11:
		printf("Одинадцать");
		break;
	case 12:
		printf("Двенадцать");
		break;
	case 13:
		printf("Тринадцать");
		break;
	default:
		printf("Ошибка! Введено неверное число");
	}
	
}
