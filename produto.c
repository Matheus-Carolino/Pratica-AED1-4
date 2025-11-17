#include <stdio.h>
#include <stdlib.h>
#include "produto.h"

void criarProduto(Produto *p){
    
    printf("Digite o código do produto: ");
    scanf("%d", &p->codProd);
    
    setbuf(stdin, NULL);
    
    printf("Digite o nome do produto: ");
    fgets(p->nomeProd, 10, stdin);
    
    printf("Digite o valor do produto: ");
    scanf("%f", &p->valor);
    
    printf("Digite a quantidade em estoque: ");
    scanf("%d", &p->qntdeEstoque);

}
