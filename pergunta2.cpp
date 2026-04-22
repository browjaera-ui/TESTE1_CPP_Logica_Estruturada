#include <iostream>
#include <vector>

using namespace std;

int main() {
    const int TOTAL_PRODUTOS = 10;
    int codigos[TOTAL_PRODUTOS];
    int stock[TOTAL_PRODUTOS];

    cout << "--- Cadastro de Stock (10 Produtos) ---" << endl;
    for (int i = 0; i < TOTAL_PRODUTOS; i++) {
        cout << "Produto " << i + 1 << " - Codigo: ";
        cin >> codigos[i];
        cout << "Produto " << i + 1 << " - Quantidade em Stock: ";
        cin >> stock[i];
    }

    int codigoPesquisa;
    cout << "\nDigite o codigo do produto para pesquisar: ";
    cin >> codigoPesquisa;

    bool encontrado = false;
    for (int i = 0; i < TOTAL_PRODUTOS; i++) {
        if (codigos[i] == codigoPesquisa) {
            encontrado = true;
            cout << "Quantidade disponivel: " << stock[i] << endl;
            
            if (stock[i] < 5) {
                cout << "AVISO: Stock Critico!" << endl;
            }
            break;
        }
    }

    if (!encontrado) {
        cout << "Produto nao encontrado." << endl;
    }

    return 0;
}
