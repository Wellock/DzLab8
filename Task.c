#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#define _USE_MATH_DEFINES
#include <math.h>
//� 19 �������

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
	puts("������� �������� �");
	scanf("%lf", &x);
	puts("������� �������� n");
	scanf("%i", &n);
	for (int start = 1; start <= n; start++)
	{
		res += pow(sin(x), start);

	}
	printf("��������� ����� >>> %.3f", res);


}