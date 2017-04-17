#ifndef GRAPH_H_INCLUDED
#define GRAPH_H_INCLUDED
#include <bits/stdc++.h>

using namespace std;

class Grafo{
    int V;
    int *madj;
    list<int> *ladj;
    public:
        Grafo(int v);
        int acessaPosicao(int i, int j);
        bool adicionaAresta(int i,int j);
        void mostraVerticeListaAdjs();
        bool adicionaArestaListaAdj(int i,int j);
        void mostraVertices();
        int calculaGrau(int i);
        bool removeAresta(int i, int j);
        int calculaGrauListaAdj(int V);
        bool existeVizinhoListaAdj(int v1, int v2)

};



#endif // GRAPH_H_INCLUDED
