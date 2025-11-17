#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
#include "produto.h"

Lista *criarListaVazia(int tam){
    Lista *l;
    l = (Lista *) malloc (sizeof(Lista));
    
    if(l != NULL){
        l->itens = (Produto *) malloc (tam * sizeof(Produto));
        l->quant = 0;
        return l;
    } else {
        return NULL;
    }
}

void inserirElemento(Lista *l, Produto *p, int tam){
    if(l->quant < tam){
        l->itens[l->quant] = *p;
        l->quant++;
        printf("Produto cadastrado com sucesso!\n");
    } else {
        printf("\nMemoria insuficiente.");
    }
}

void imprimirLista (Lista *l){
    if(l->quant == 0){
        printf("Sem produtos na lista!\n");
    } else {
        int p;
        for(p = 0; p < l->quant; p++){
            printf("---------------------------\n");
            printf("ID: %d\n", l->itens[p].codProd);
            printf("NOME: %s", l->itens[p].nomeProd);
            printf("VALOR: %.2fR$\n", l->itens[p].valor);
            printf("QNT ESTOQUE: %d\n", l->itens[p].qntdeEstoque);
            printf("---------------------------\n");
        }
    }
}

void imprimirMenorValor(Lista *l){
    Produto mValor;
    mValor = l->itens[0];
    
    for(int p = 0; p < l->quant; p++){
        if(l->itens[p].valor < mValor.valor){
            mValor = l->itens[p];
        }
    }
    
    printf("---------------------------\n");
    printf("ID: %d\n", mValor.codProd);
    printf("NOME: %s", mValor.nomeProd);
    printf("VALOR: %.2fR$\n", mValor.valor);
    printf("QNT ESTOQUE: %d\n", mValor.qntdeEstoque);
    printf("---------------------------\n");
}

void venda(int codVenda, int qntdVenda, Lista *l){
    for(int p = 0; p < l->quant; p++){
        if(l->itens[p].codProd == codVenda){
            if(l->itens[p].qntdeEstoque > qntdVenda){
                l->itens[p].qntdeEstoque = (l->itens[p].qntdeEstoque - qntdVenda);
                printf("Venda realizada com sucesso!!");
            } else {
                printf("Quantidade maior que a disponível");
            }
        }
    }
}