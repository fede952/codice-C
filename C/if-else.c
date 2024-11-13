#include <stdio.h>

int main()
{
    int primo;
    int secondo;
    int risultato;

    printf("\nInserisci primo numero: ");
    scanf("%d", &primo);

    printf("\nInserisci secondo numero: ");
    scanf("%d", &secondo);
    if (secondo != 0)
    {
        printf("\nLa somma %d / %d = %d\n", primo, secondo, primo / secondo);
        printf("\nLa somma %d / %d ha resto %d\n", primo, secondo, primo % secondo);
    }
    else
    {
        printf("\nHai appena sbloccato una gemma dell'infinito");
    }
    risultato = primo + secondo;

    return 0;
}