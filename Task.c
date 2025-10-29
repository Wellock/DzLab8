#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>
//ß 19 вариант

taskID();


void main()

{

	system("chcp 1251");
	taskID();
	

}

taskID()
{
	double x;
	int n;
	double res = 0;


	puts("sin(x)+sin^2(x)+sin^3(x)+...+sin^n(x)");
	puts("Введите значение х");
	scanf("%lf", &x);
	puts("Введите значение n");
	scanf("%i", &n);
	for (int start = 1; start <= n; start++)
	{
		res += pow(sin(x), start);

	}
	printf("Результат равен >>> %.3f", res);



}
