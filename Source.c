#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
	char c;
	setlocale(LC_ALL, "RUS");
	printf("������� ����� '1' or ����� 'a' :");
	scanf("%c",&c); 
	switch (c)
	{
		case '1' :
			printf("��� �����.\n");
			break;
		case 'a' :
			printf("��� �����.\n");
			break;
		default:

			printf("����������� ������\n");	
	}
		
	return 0;
}
