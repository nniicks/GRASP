#include <stdio.h>
#include "grasp_funcoes.c"


int main(){
    celula *itens = NULL;  // lista que ira armazenar todos os itens de entrada
    celula *solucao = NULL;  // lista que vai conter todos os itens que fazem parte da solucao 
    FILE *pt_arq = fopen("input.txt", "r");
    int max_iteracoes = 1;
    int capacidade, quant_item, valor, peso;

    fscanf(pt_arq, "%d", &capacidade);
    fscanf(pt_arq, "%d", &quant_item);



    //printf("%d\n", capacidade);
    for(int i = 0; i < quant_item; i++){

        // faço a contrucao da solucao gulosa randomizada
        //    funcaox(itens, &solucao)
        fscanf(pt_arq, "%d %d", &valor, &peso);
        //fscanf(pt_arq, "%d", &aux);
       // printf("%d ", aux);
       // printf("item %d valor: %d peso: %d\n", i+1, valor, peso);

        insercao(i+1, peso, valor, &itens);
    }

    // alocando o vetor
    printf("lista de todos os itens na main:\n");
    imprimir(itens);
    for(int i = 0; i < max_iteracoes; i++){
        contrucao_gulosa_randomizada(itens, &solucao, capacidade, 0);

        // busca local que 

        // 

        // antes desse laço rodar mais uma vez eu preciso "zerar" a lista "solucao"

        //apaga_lista(&solucao);
    }

    //imprimir(itens);
   imprimir(solucao);

    fclose(pt_arq);

    return 0;
}
