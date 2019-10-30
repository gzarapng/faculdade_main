#include<stdio.h>
#include<stdlib.h>
#include "listaLigada.h"
struct elemento{
    ALUNO dados;
    struct elemento *prox;
};
typedef struct elemento ELEM;

Lista *criaLista(){
    Lista *li;
    li = (Lista*) malloc(sizeof(Lista));
    if(li != NULL){
        *li = NULL;
    }
    return li;
}

void apagaLista(Lista *li){


    if(li != NULL){
        ELEM *no;
        while((*li)!=NULL){
        no = *li;
        *li = (*li)->prox;
        free(no);
        }
    }
    free(li);
     printf("apagado com sucesso");

}

int tamLista(Lista *li){
    if(li==NULL){
        return 0;
    }
    int acum = 0;
    ELEM *no = *li;
    while(no != NULL){
        acum++;
        no = no->prox;
    }
    return acum;
}
int listaCheia(Lista *li){
return 0;
}

int listaVazia(Lista *li){
if(li==NULL){
    return 1;
}
if(*li == NULL){
    return 1;
}
return 0;
}

int insere_inicio_lista(Lista *li, ALUNO al){
    if(li==NULL){
        return 0;
    }
    ELEM *no (ELEM*) malloc (sizeof(ELEM));
    if(no==NULL){
        return 0;
    }
    no->dados = al;
    no->prox =(*li);
    *li = no;
    return 1;
}

int insere_final_lista(Lista *li, ALUNO al){
    if(li == NULL){
        return 0;
    }
    ELEM *no = (ELEM*) malloc(sizeof(ELEM));
    if(no==NULL){
        return 0;
    }
    no->dados = al;
    no->prox = NULL;
    if((*li) == NULL){
        *li = no;
    }else{
    ELEM *aux = *li;
    while(aux->prox != NULL){
        aux = aux->prox;
    }
    aux->prox = no;
    }
return 1;
}

int insere_lista_ordenada(Lista *li, ALUNO al){
    if(li==NULL){
        return 0;
    }
    ELEM *no = (ELEM*) malloc(sizeof(ELEM));
    if(no == NULL){
        return 0;
    }
    no->dados = al;
    if(listaVazia(li)){
        no->prox = (*li);
        *li = no;
        return 1;
    }else{
        ELEM *ant *atual = *li;
        while(atual != NULL && atual->dados.matricula < al.matricula){
            ant = atual;
            atual = atual -> prox;
        }
        if(atual == *li){
            no->prox=(*li);
            *li = no;
        }else{
        no->prox = ant->prox;
        ant->prox = no;
        }
        return 1;
    }
}

int remove_inicio_lista(Lista *li){
if(li==NULL){
    return 0;
}
if(*li==NULL){
    return 0;
}
ELEM *no = *li;
*li = no->prox;
free(no);
return 1;
}

int remove_final_lista(Lista *li){
if(li==NULL){
    return 0;
}
if((*li) == NULL){
    return 0;
}
ELEM *ant, *no = *li;
while(no->prox != NULL){
    ant = no;
    no = no->prox;
}
if(no==(*li)){
    *li = no->prox;
}else{
ant->prox = no->prox;
}
free(no);
return 1;
}
