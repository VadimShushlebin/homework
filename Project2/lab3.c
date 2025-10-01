#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
	float kat1,kat2;
	setlocale(LC_ALL, "RUS");
	puts("¬ведите длину первого катета:");
	scanf("%f",&kat1);
	puts("¬ведите длину второго катета:");
	scanf("%f", &kat2);
	float result = sqrt(pow(kat1, 2) + pow(kat2, 2));
	printf("√ипотенуза пр€моугольного треугольника равна %.2f", result);

}