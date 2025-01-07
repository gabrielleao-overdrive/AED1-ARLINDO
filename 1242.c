#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_RNA 300
typedef struct rnaa{

    char rna[MAX_RNA];
    struct rnaa *seg;
}rnaa;

void insere(char *y, rnaa **p){
    rnaa *novo = malloc(sizeof(rnaa));
    if(novo == NULL){
        fprintf(stderr, "erro de alocação\n");
        exit(EXIT_FAILURE);
    }
    strcpy(novo->rna, y);
    novo->seg = NULL;

    if(*p == NULL){
        *p = novo;
    } else {
        rnaa *temp = *p;
        while(temp->seg != NULL){
            temp = temp->seg;
        }
        temp->seg = novo;
    }
}

int conta_ligacoes(const char *rna) {
    int b_s = 0;
    int c_f = 0;
    int ligacoes = 0;

    for (int i = 0; rna[i] != '\0'; i++) {
        if (rna[i] == 'B') {
            if (b_s > 0) {
                b_s--;
                ligacoes++;
            } else {
                b_s++;
            }
        } else if (rna[i] == 'S') {
            if (b_s > 0) {
                b_s--;
                ligacoes++;
            } else {
                b_s++;
            }
        } else if (rna[i] == 'C') {
            if (c_f > 0) {
                c_f--;
                ligacoes++;
            } else {
                c_f++;
            }
        } else if (rna[i] == 'F') {
            if (c_f > 0) {
                c_f--;
                ligacoes++;
            } else {
                c_f++;
            }
        }
    }

    return ligacoes;
}

void liberar_lista(rnaa *p) {
    rnaa *temp;
    while (p != NULL) {
        temp = p;
        p = p->seg;
        free(temp);
    }
}
int main(){

    rnaa *p = NULL;
    char n[MAX_RNA];
    char fim[] = "EOF";
    do{
        fgets(n,sizeof(MAX_RNA), stdin);
        insere(n,p);
    }while(strcmp(n,fim) == 0);
printf("número de duplas:%d", conta_ligacoes(p));
liberar_lista(p);
return 0;
}
