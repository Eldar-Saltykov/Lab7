#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
	char c;
	setlocale(LC_ALL, "RUS");
	printf("Введите цифру '1' or букву 'a' :");
	scanf("%c",&c); 
	switch (c)
	{
		case '1' :
			printf("Это цифра.\n");
			break;
		case 'a' :
			printf("Это буква.\n");
			break;
		default:

			printf("Неизвестный символ\n");	
	}
		
	return 0;
}
