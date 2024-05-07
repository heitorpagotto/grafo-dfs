#include "grafosClassGetSet.cpp"
#include <iostream>
using namespace std;

class Grafo_DFS : public GRAFO {
public:
    Grafo_DFS() {}

    Grafo_DFS(int v) : GRAFO(v) {}


    void findKey(int chave) {
        int u;
        bool found = false;
        for (u = 0; u < getVertices(); u++) {
            VERTICE *verts;
            verts = getAdj();
            if (verts[u].getChave() == chave) {
                cout << "A chave " << chave << " esta no vertice v" << u;
                found = true;
                break;
            }
        }

        if (!found)
            cout << "Chave " << chave  << " nao encontrada";
    }
};

int main() {
    Grafo_DFS *gr = new Grafo_DFS(5);
    gr->criaAresta(0, 1, 2, -1);
    gr->criaAresta(1, 2, 4, 2);
    gr->criaAresta(2, 0, 12, 4);
    gr->criaAresta(2, 4, 40, 4);
    gr->criaAresta(3, 1, 3, 5);
    gr->criaAresta(4, 3, 8, 6);
    gr->imprime();
    gr->findKey(5);

    return 0;
}