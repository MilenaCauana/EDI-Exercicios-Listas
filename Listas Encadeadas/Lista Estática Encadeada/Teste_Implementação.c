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
    int prim;
    int prox;
    Lista A[MAX]; //Aqui, criamos um vetor do tipo Lista, ou seja, A[0] irá guardar o elemento e o próximo

} Lista;

//Agora, iremmos criar uma função para inicializar a lista
void Inicializando (Lista *lista)
{
    int i = 0;

}

int main ()
{



return 0;
}
