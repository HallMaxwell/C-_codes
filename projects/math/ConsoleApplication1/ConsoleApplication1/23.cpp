#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h> // sqrt��Ҫ����math.h
int main()
{
	// ����a��b��c
	double a, b, c, p, s;
	scanf("%lf %lf %lf", &a, &b, &c);
	// �Ƿ��ܹ���������
	if (a + b > c && a + c > b && b + c > a)
	{
		if (a * a + b * b == c * c)
		{
			printf("Rtriangle\n");
		}
		else 
		{
			printf("Triangle\n");
		}
	}
	else
	{
		// �޷����������Σ����������
		printf("Notriangle\n");
		return 0;
	}
	// �������ε����
	p = (a + b + c) / 2;
	s = sqrt(p * (p - a) * (p - b) * (p - c));
	// ������
	printf("s=%f", s);
	return 0;
}