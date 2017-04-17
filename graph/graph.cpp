#include "graph.h"

Grafo::Grafo(int V){
    this->V = V;
    madj = (int *)malloc(sizeof(int)*V);
    ladj = new list<int>[V];
}
int Grafo::acessaPosicao(int i, int j){
    int aux;
    if(i>j){
        aux =i;
        i=j;
        j=aux;
    }
    return (i*(this->V))+(i*(i-1)/2)j-i;
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
int Grafo::calculaGrauListaAdj(int V){
    return ladj[V].size();
}
bool Grafo::existeVizinhoListaAdj(int v1, int v2){
	if(find(ladj[v1].begin(), ladj[v1].end(), v2) != ladj[v1].end())
		return true;
	return false;
}
void Grafo::adicionaArestaListaAdj(int i,int j){
    	ladj[v1].push_back(v2);
       	ladj[v2].push_back(v1);
}
void Grafo::mostraVerticesListaAdj(){
    for(int i=0;i<this->V;i++){
        cout << i << "-> ";
        for(iterator::list<int> it = ladj.begin(); it!=ladj.end(); it++){
            cout << *it << " ";
        }
        cout << endl;
    }

}
