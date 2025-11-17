# Prática-AED1-4
Atividade prática sobre Tipos Abstratos de Dados (TADs), com type lista utilizando alocação dinâmica de elementos e modularização de funções.
A atividade consiste na criação de uma lista de produtos, com tamanho dinamico. Foram criadas funções de:
* 1 - Criar uma lista vazia;
* 2 - Criar um produto;
* 3 - Inserir um elemento na lista;
* 4 - Imprimir a Lista;
* 5 - Imprimir o produto de menor valor;
* 6 - Vender um produto de acordo com o estoque.

Sendo o produto de acordo com a estrutura abaixo:
```
struct produto{
    int codProd;        //código do produto
    char nomeProd[10];  //nome do produto
    float valor;        //valor do produto
    int qtdeEstoque;    //quantidade disponível em estoque
}
```
