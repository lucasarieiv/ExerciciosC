#include <stdio.h>

int main() {
	float b, h, a;
	printf("Digite a base do tri�ngulo: ");
	scanf("%f", &b);
	printf("Digite a altura do tri�ngulo: ");
	scanf("%f", &h);
	a = b * h / 2;
	printf("�rea = %f", a);
}
