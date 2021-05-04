#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{

    int n, i, a, b, ma, mb, mmc;

    printf("MMC ENTRE VARIOS PARES DE NUMEROS\n");
    printf("\nDigite quantos pares de numeros: \n\n");
    scanf("%d", &n);

    i = 1;

    while (i <= n)
    {
        printf("\nDigite o par %d: \n\n", i);
        scanf("%d%d", &a, &b);
        printf("\nMMC (%d, %d) =", a, b);

        if (a == 0 || b == 0)
        {
            mmc = 0;

            printf(" %d\n\n", mmc);
        }
        else
        {
            a = abs(a);
            b = abs(b);
            ma = a;
            mb = b;

            while (ma != mb)
            {
                if (ma < mb)
                    ma = ma + a;
                else
                    mb = mb + b;
            }

            mmc = ma;
            printf(" %d\n\n", mmc);

        }

        i = i + 1;

    }

    printf("\n\n");
    system("pause");
    return 0;
}
