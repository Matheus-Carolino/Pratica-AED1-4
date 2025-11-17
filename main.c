#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
#include "produto.h"

int main()
{
    Lista *lp;
    int tam, op, codVenda, qntdVenda;
    Produto *p;
    
    printf("Digite o tamanho da lista: ");
    scanf("%d", &tam);
    
    lp = criarListaVazia(tam);
    
    while (op != 0){
        printf("\n---------------------\n");
        printf("1 - Criar Produto\n");
        printf("2 - Listar Produtos\n");
        printf("3 - Exibir menor valor\n");
        printf("4 - Realizar venda\n");
        printf("0 - EXIT\n");
        printf("---------------------\n");
        printf("Digite a ação: ");
        scanf("%d", &op);
        
        switch(op){
            case 0:
                break;
            case 1:
                criarProduto(p);
                inserirElemento(lp, p, tam);
                break;
            case 2:
                imprimirLista(lp);
                break;
            case 3:
                imprimirMenorValor(lp);
                break;
            case 4:
                printf("Digite o código do produto para venda: ");
                scanf("%d", &codVenda);
                
                printf("Digite a quantidade desejada: ");
                scanf("%d", &qntdVenda);
                
                venda(codVenda, qntdVenda, lp);
                break;
            default:
                printf("Ação inválida!!");
        }
    }

    return 0;
}