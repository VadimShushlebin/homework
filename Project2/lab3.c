#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
	float kat1,kat2;
	setlocale(LC_ALL, "RUS");
	puts("Введите длину первого катета:");
	scanf("%f",&kat1);
	puts("Введите длину второго катета:");
	scanf("%f", &kat2);
	float result = sqrt(pow(kat1, 2) + pow(kat2, 2));
	printf("Гипотенуза прямоугольного треугольника равна %.2f", result);

}