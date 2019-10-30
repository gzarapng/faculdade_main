typedef struct aluno{
int matricula;
float n1, n2, n3;

}ALUNO;
typedef struct elemento* Lista;

Lista *criaLista();

void apagaLista(Lista *li);

int tamLista(Lista *li);

int listaCheia(Lista *li);

int listaVazia(Lista *li);

int insere_inicio_lista(Lista *li, ALUNO al);

int insere_final_lista(Lista *li, ALUNO al);

int insere_lista_ordenada(Lista *li, ALUNO al);

int remove_inicio_lista(Lista *li);

int remove_final_lista(Lista *li);

