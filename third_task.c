#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    double X1, X2;
    X2 = 0;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    double Dis;
    Dis = b * b - 4 * a * c;
    if (Dis > 0)
    {
        X1 = ((0 - b) + sqrt(Dis)) / (2 * a);
        printf("%lf\n", X1);
        X2 = ((0 - b) - sqrt(Dis)) / (2 * a);
        printf("%lf", X2);
    }
    if (Dis == 0)
    {
        X1 = (0 - b) / (2 * a);
        printf("%lf", X1);
    }
    if (Dis < 0)
    {
        printf("No solution!");
    }

    return 0;
}