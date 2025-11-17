#ifndef _LISTA_H
#define _LISTA_H
#include "produto.h"
    
    struct lista{
        Produto *itens;
        int quant;
    };
    typedef struct lista Lista;
    
    Lista *criarListaVazia(int tam); //Passagem por valor
    void inserirElemento(Lista *l, Produto *p, int tam); //Duas passagens por referencia e uma por valor
    void imprimirLista(Lista *l); //Passagem por referencia
    void imprimirMenorValor(Lista *l); //Passagem por referencia
    void venda(int codVenda, int qntdVenda, Lista *l); //Duas passagens por valor e uma por referencia
#endif