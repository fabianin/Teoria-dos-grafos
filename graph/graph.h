#ifndef GRAPH_H_INCLUDED
#define GRAPH_H_INCLUDED
#include <bits/stdc++.h>

using namespace std;

class Grafo{
    int V;
    int *madj;
    public:
        Grafo(int v);
        int acessaPosicao(int i, int j);
        bool adicionaAresta(int i,int j);
        void mostraVertices();
        int calculaGrau(int i);
        bool removeAresta(int i, int j);

};



#endif // GRAPH_H_INCLUDED
