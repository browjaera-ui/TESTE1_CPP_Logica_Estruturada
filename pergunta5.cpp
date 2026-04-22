#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    const int NUM_ATLETAS = 8;
    string nomes[NUM_ATLETAS];
    int tempos[NUM_ATLETAS];

    cout << "--- Cadastro de Atletas ---" << endl;
    for (int i = 0; i < NUM_ATLETAS; i++) {
        cout << "Nome do Atleta " << i + 1 << ": ";
        cin.ignore();
        getline(cin, nomes[i]);
        cout << "Tempo de corrida (segundos): ";
        cin >> tempos[i];
    }

    for (int i = 0; i < NUM_ATLETAS - 1; i++) {
        for (int j = 0; j < NUM_ATLETAS - i - 1; j++) {
            if (tempos[j] > tempos[j + 1]) {
                int tempTempo = tempos[j];
                tempos[j] = tempos[j + 1];
                tempos[j + 1] = tempTempo;

                string tempNome = nomes[j];
                nomes[j] = nomes[j + 1];
                nomes[j + 1] = tempNome;
            }
        }
    }

    cout << "\n--- Classificacao Final (Mais Rapido para o Mais Lento) ---" << endl;
    for (int i = 0; i < NUM_ATLETAS; i++) {
        cout << i + 1 << " Lugar: " << nomes[i] << " - " << tempos[i] << " segundos" << endl;
    }

    return 0;
}
