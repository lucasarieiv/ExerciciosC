#include <stdio.h>

int main() {
	float b, h, a;
	printf("Digite a base do triângulo: ");
	scanf("%f", &b);
	printf("Digite a altura do triângulo: ");
	scanf("%f", &h);
	a = b * h / 2;
	printf("Área = %f", a);
}
