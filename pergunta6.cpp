#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    const int TOTAL_PRODUTOS = 20;
    string nomes[TOTAL_PRODUTOS];
    float precos[TOTAL_PRODUTOS];

    cout << "--- Cadastro de 20 Produtos ---" << endl;
    for (int i = 0; i < TOTAL_PRODUTOS; i++) {
        cout << "Produto " << i + 1 << " - Nome: ";
        cin.ignore();
        getline(cin, nomes[i]);
        cout << "Produto " << i + 1 << " - Preco: ";
        cin >> precos[i];
    }

    string produtoPesquisa;
    cout << "\nDigite o nome do produto para saber o preco: ";
    cin.ignore();
    getline(cin, produtoPesquisa);

    bool encontrado = false;
    for (int i = 0; i < TOTAL_PRODUTOS; i++) {
        if (nomes[i] == produtoPesquisa) {
            cout << fixed << setprecision(2);
            cout << "O preco do produto '" << nomes[i] << "' e: " << precos[i] << " MT" << endl;
            encontrado = true;
            break;
        }
    }

    if (!encontrado) {
        cout << "Mensagem: Produto nao encontrado no sistema." << endl;
    }

    return 0;
}
