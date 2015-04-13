#include <stdio.h>
#include <stdlib.h>

#define MAX_STRLEN 30
#define N 3

 struct s_alunno {
        char nome[MAX_STRLEN];
        char cognome[MAX_STRLEN];
        unsigned int eta;
        char classe[MAX_STRLEN];    
    };

int main(int argc, char** argv) {

    int i;
    struct s_alunno Alunno[N];
    
    for(i = 0; i < N; i++) {
        printf("Inserisci il nome dell'alunno: ");
        scanf("%s", &Alunno[i].nome);
        printf("Inserisci il cognome dell'alunno: ");
        scanf("%s", &Alunno[i].cognome);
        printf("Inserisci l'eta dell'alunno: ");
        scanf("%d", &Alunno[i].eta);
        printf("Inserisci la classe dell'alunno: ");
        scanf("%s", &Alunno[i].classe);
    }
    
    for(i = 0; i < N; i++) {
        printf("%s; %s; %d; %s;\n", Alunno[i].nome, Alunno[i].cognome, Alunno[i].eta, Alunno[i].classe);
    }
  
    return (EXIT_SUCCESS);
}
