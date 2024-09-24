#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 6
#define M 3

typedef struct CIDADE
{
    int codc;
    char nome[50];
    char estado[50];
}CITY;

typedef struct FUNC
{
    int cod;
    char nome[50];
    int city;
}FUNC;

void ordena(FUNC vet[N])
{
    int i,j;
    FUNC aux;

    for(j=0;j<N-1;j++)
    {
        for(i=0;i<N-j-1;i++)
        {
            if(vet[i].city>vet[i+1].city)
            {
                aux=vet[i];
                vet[i]=vet[i+1];
                vet[i+1]=aux;
            }
            if(vet[i].city==vet[i+1].city && strcmp(vet[i].nome,vet[i+1].nome)>0)
            {
                aux=vet[i];
                vet[i]=vet[i+1];
                vet[i+1]=aux;
            }
        }
    }
}
void ordena_city(CITY v[M])
{
    int i,j;
    CITY aux;

    for(i=0;i<M-1;i++)
    {
        for(j=0;j<M-1-i;j++)
        {
            if(strcmp(v[j].nome,v[j+1].nome)>0)
            {
                aux=v[j];
                v[j]=v[j+1];
                v[j+1]=aux;
            }
        }
    }
}

void mostra(FUNC vet[N], CITY v[M])
{
    int i,j;

    for(i=0;i<M;i++)
    {
        printf("\n%s - %s\n", v[i].nome, v[i].estado);
        for(j=0;j<N;j++)
        {
            if(v[i].codc==vet[j].city) printf("%d %s\n", vet[j].cod,vet[j].nome);
        }
    }
}

int main()
{
    CITY v[M];
    FUNC vet[N];
    int i;

    for(i=0;i<M;i++)
    {
        printf("CODIGO DA CIDADE: ");
        scanf("%d", &v[i].codc);
        fflush(stdin);
        printf("NOME: ");
        gets(v[i].nome);
        fflush(stdin);
        printf("ESTADO: ");
        gets(v[i].estado);
    }

    ordena_city(v);

    for(i=0;i<N;i++)
    {
        printf("COD FUNCIONARIO: ");
        scanf("%d", &vet[i].cod);
        fflush(stdin);
        printf("NOME: ");
        gets(vet[i].nome);
        printf("COD CIDADE: ");
        scanf("%d", &vet[i].city);
    }

    ordena(vet);
    mostra(vet,v);

}
