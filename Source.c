#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define _USE_MATH_DEFINES
#define d 1
homework();
int main() {
	homework();
}
int homework() {
	puts("HOMEWORK----------------------------------------------------------------------------------------------------------------");
	double x1;
	double y1;
	double F;
	puts("Enter x:");
	scanf_s("%lf", &x1);
	puts("Enter y:");
	scanf_s("%lf", &y1);
	F = (pow(cos(y1), 2) + 2.4 * d) / (exp(y1) + log(pow(sin(x1), 2) + 6));
	printf("Result F: %.6f\n", F);
	return 0;
	// Варианты для проверки:
	// 1 Вариант: x = 4, y = 2
	// 2 Вариант: x = 0.0000015, y = -2000000000
}