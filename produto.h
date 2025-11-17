#ifndef _PRODUTO_H
#define _PRODUTO_H
    
    struct produto{
        int codProd;
        char nomeProd[10];
        float valor;
        int qntdeEstoque;
    };
    typedef struct produto Produto;
    
    void criarProduto(Produto *p); //Passagem por referencia
#endif