#include <stdio.h>
#include <math.h>

int main() {
double a, b, c, delta, x1, x2;

    printf("Digite a, b e c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        printf("O coeficiente 'a' deve ser diferente de zero.\n");
    }

    delta = (b * b) - (4 * a * c);

    printf("Delta = %.2lf\n", delta);

    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Duas raizes reais: x1 = %.2lf e x2 = %.2lf\n", x1, x2);
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("Uma raiz real (dupla): x1 = x2 = %.2lf\n", x1);
    } else {
        printf("Nao existem raizes reais (delta negativo).\n");
    }

    return 0;
}
