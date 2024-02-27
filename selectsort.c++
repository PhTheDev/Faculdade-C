#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void SelectSort(int *V, int tam);

int main() {
    int i;
    cout << "Digite o tamanho do vetor:\n";
    int tamanho;
    cin >> tamanho;
    int vetor[tamanho];
    unsigned seed = time(0);
    srand(seed);
    for (i = 0; i < tamanho; i++) {
        vetor[i] = rand() % 100;
    }
    // chama a funcao selectsort para ordenar o vetor
    SelectSort(vetor, tamanho);

    for (i = 0; i < tamanho; i++) {
        cout << "Vetor na posicao " << i << ": " << vetor[i] << endl;
    }

    return 0;
}

void SelectSort(int V[], int n) {
    int i, j, menor, AUX;
    for (i = 0; i < n - 1; i++) {
        menor = i;
        for (j = i + 1; j < n; j++) {
            if (V[j] < V[menor]) {
                menor = j;
            }
        }
        // troca de valores
        AUX = V[menor];
        V[menor] = V[i];
        V[i] = AUX;
    }
}
