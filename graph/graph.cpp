#include "graph.h"

Grafo::Grafo(int V){
    this->V = V;
    madj = (int *)malloc(sizeof(int)*V);
}
int Grafo::acessaPosicao(int i, int j){
    int aux;
    if(i>j){
        aux =i;
        i=j;
        j=aux;
    }
    return (i*(this->V))+j-i;
}
bool Grafo::adicionaAresta(int i,int j){
    if((i>V) || (j>V)){
        return false;
    }
    madj[acessaPosicao(i,j)]=1;
    return true;
}
bool Grafo::removeAresta(int i,int j){
    if((i>V) || (j>V)){
        return false;
    }
    madj[acessaPosicao(i,j)]=1;
    return true;
}
int Grafo::calculaGrau(int i){
    int soma =0;
    for(int j=0;j<V;j++){
        soma+=madj[acessaPosicao(i,j)];
    }
}
void Grafo::mostraVertices(){
    int soma =0;
    for(int i=0;i<V;i++){
        std::cout << "Vertice: " << i << " -> ";
        for(int j=i;j<V;j++){
            std::cout << madj[acessaPosicao(i,j)];
        }
    }
        std::cout << endl;
}
