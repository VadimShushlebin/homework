#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
	float kat1,kat2;
	setlocale(LC_ALL, "RUS");
	puts("������� ����� ������� ������:");
	scanf("%f",&kat1);
	puts("������� ����� ������� ������:");
	scanf("%f", &kat2);
	float result = sqrt(pow(kat1, 2) + pow(kat2, 2));
	printf("���������� �������������� ������������ ����� %.2f", result);

}