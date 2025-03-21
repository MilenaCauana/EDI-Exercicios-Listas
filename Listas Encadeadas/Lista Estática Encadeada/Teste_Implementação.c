//Milena Cauana - Implementando Lista Estática Encadeada: //
#include<stdio.h>

#define MAX 11

typedef struct
{
    //Iremos utilizar um campo para inteiro, mas poderia ser uma outra struct (depende da aplicação)
    int elem;
    int prox;

} Reg;

typedef struct
{
    int disp;
    int prim;
    Reg A[MAX]; //Aqui, criamos um vetor do tipo Lista, ou seja, A[0] irá guardar o elemento e o próximo

} Lista;

//Agora, iremmos criar uma função para inicializar a lista
void Inicializando (Lista *lista)
{
    int i = 0;
    lista->disp = 0;
    lista->prim = -1;
    for (i = 0; i < MAX - 1; i++)
    {
        lista->A[i].prox=i+1;
    }
    lista->A[i].prox = -1;
}

int main ()
{
    Lista lista;

    //Primeiro, iremos inicializar a lista
    Inicializando (&lista);

    //Imprimindo as informações da lista inicializada, para conferir
    printf("Primeiro: %d\n", lista.prim);
    printf("Disponivel: %d\n", lista.disp);
    for (int i = 0; i < MAX; i++)
    {
        printf("Elemento %d e proximo dele esta na posicao %d\n", lista.A[i].elem, lista.A[i].prox);
    }

return 0;
}
