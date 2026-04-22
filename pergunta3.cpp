#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    const int NUM_ALUNOS = 15;
    string nomes[NUM_ALUNOS];
    float medias[NUM_ALUNOS];
    int aprovados = 0;

    cout << "--- Registro de Notas (15 Alunos) ---" << endl;
    for (int i = 0; i < NUM_ALUNOS; i++) {
        cout << "Nome do aluno " << i + 1 << ": ";
        cin.ignore();
        getline(cin, nomes[i]);
        cout << "Media final de " << nomes[i] << ": ";
        cin >> medias[i];

        if (medias[i] >= 10) {
            aprovados++;
        }
    }

    cout << "\n--- Alunos Aprovados (Nota >= 10) ---" << endl;
    for (int i = 0; i < NUM_ALUNOS; i++) {
        if (medias[i] >= 10) {
            cout << "- " << nomes[i] << " (Nota: " << medias[i] << ")" << endl;
        }
    }

    float percentagem = (float)aprovados / NUM_ALUNOS * 100;
    cout << fixed << setprecision(2);
    cout << "\nPercentagem de aprovacao da turma: " << percentagem << "%" << endl;

    return 0;
}
