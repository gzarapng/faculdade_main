#include<stdio.h>
#include<stdlib.h>
#include "listaLigada.h"
int main(){
Lista *li;
li = criaLista();
int x, mat = 110, posicao =1;
struct aluno, al, al2, al3, dados_aluno;
al.matricula = 100;
al.n1 = 5.3;
al.n2 = 6.9;
al.n3 = 7;
al2.matricula = 120;
al2.n1 = 2.3;
al2.n2 = 9.9;
al2.n3 = 8;
al3.matricula = 110;
al3.n1 = 1.3;
al3.n2 = 2.9;
al3.n3 = 3;
//printf("tudo certo!\n");
x = tamLista(li);
printf("O tamanho é: %d", x);
if(listaCheia(li)){
    printf("\nLista está cheia!");
}else{
    printf("\nLista vazia");
}
if(listaVazia(li)){
    printf("\nLista vazia!");

}else{
printf("\n Lista não esta vazia!");
}

x = insere_inicio_lista(li, a11);
if(x){
printf("\nInserido no inicio com sucesso");
}else{
printf("\n Nao foi possivel inserir");
}
x = insere_final_lista(li, a12);
if(x){
    printf("\nInserido no final com sucesso!");
}else{
    printf("\n Nao foi possivel inserir no final");
}
x = insere_lista_ordenada(li, al3);
if(x){
    printf("\n Sucesso ao inserir");
}else{
printf("erro ao inserir");
}
x = remove_inicio_lista(li);
if(x){
    printf("\n Sucesso ao remover");
}else{
printf("erro ao remover");
}
x = remove_final_lista(li);
if(x){
    printf("\nRemovido do final com sucesso!");
}else{
    printf("\n erro ao remover");
}

apagaLista(li);
//printf("tudo certo!");
system("pause");
}
