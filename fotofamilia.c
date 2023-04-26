#include <stdio.h>
#include <math.h>
// a pessoa mais baixa deve ficar sempre do lado esquerdo [0], a segunda mais baixa do lado direito[3], no meio, logo após a mais baixa, fica a terceira mais baixa[1] e em seguida a mais alta[2].

void bubble(int i, double altura[], int fim) // ordem crescente
{
    if(i < (fim - 1))
    {
        if (altura[i] > altura[i + 1])
        {
            double aux = altura[i];
            altura[i] = altura[i + 1];
            altura[i + 1] = aux;
        }
        bubble(i + 1, altura, fim);
    }
    else
    {
        return;
    }

}

void sort(int i, double altura[], int tam)
{
    if (i < (tam - 1))
    {
        bubble(i, altura, tam);
        sort(i, altura, tam - 1);
    }

}


void scan(int i, double altura[], int tam)
{
    if(i == tam)
    {
        return;
    }

    scanf("%lf", &altura[i]);
    scan(i + 1, altura, tam);
}


int main(){
    int tam = 4;
    double altura [tam];

    
    scan(0, altura, tam);
    sort(0, altura, tam);
    
    printf("%.2lf\n%.2lf\n%.2lf\n%.2lf", altura[0], altura[2], altura[3], altura[1]);

    return 0;
}