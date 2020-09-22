#include <stdio.h>
#include <math.h>

int main() {
	float r, c;
	printf("Digite o raio: ");
	scanf("%f", &r);
	c = 2 * M_PI * r;
	printf("O raio é %f\n", c);
}
