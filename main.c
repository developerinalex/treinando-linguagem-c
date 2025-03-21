#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

struct pessoa{
    char nome[50];
    int idade;
};

typedef struct pessoa pessoa;

char verify(char ec[4]);

int main(int argc, char *argv[]){
    setlocale(LC_ALL, "Portuguese");

    pessoa p;

    printf("Olá, seja bem-vindo! Digite o seu nome: ");
    scanf("%49[^\n]", p.nome);
    printf("Qual a sua idade? ");
    scanf("%d", &p.idade);

    system("clear");

    int vet;
    char ec[4];

    printf("Selecione a dificuldade de 1 a 5: ");
    scanf("%d", &vet);

    switch(vet){
        case 1:
            printf("Pacífico selecionado.\n");
            break;
        case 2:
            printf("Modo fácil selecionado.\n");
            break;
        case 3: 
            printf("Dificuldade média escolhida.\n");
            break;
        case 4: 
            printf("Díficil selecionado");
            break;
        case 5: 
            printf("Insano solicitado. Tem certeza disso? ");
            scanf("%s", ec);
            char verify();
            break;
    }
}

char verify(char ec[4]){
    if(ec == "yes"){
        printf("Boa sorte, tu vai precisar muito.");
    }
    else {
        printf("Retorne ao processo inicial.");
    }
}