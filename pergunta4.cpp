#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    const int NUM_ITENS = 5;
    string nome_item[NUM_ITENS];
    float preco_unitario[NUM_ITENS];
    int quantidade_comprada[NUM_ITENS];
    float subtotal[NUM_ITENS];
    float valor_total = 0;

    cout << "--- Entrada de Itens da Fatura ---" << endl;
    for (int i = 0; i < NUM_ITENS; i++) {
        cout << "Item " << i + 1 << " - Nome: ";
        cin.ignore();
        getline(cin, nome_item[i]);
        cout << "Item " << i + 1 << " - Preco Unitario (MT): ";
        cin >> preco_unitario[i];
        cout << "Item " << i + 1 << " - Quantidade: ";
        cin >> quantidade_comprada[i];

        subtotal[i] = preco_unitario[i] * quantidade_comprada[i];
        valor_total += subtotal[i];
    }

    cout << fixed << setprecision(2);
    cout << "\n--- Detalhes da Fatura ---" << endl;
    for (int i = 0; i < NUM_ITENS; i++) {
        cout << nome_item[i] << ": " << quantidade_comprada[i] << " x " 
             << preco_unitario[i] << " = " << subtotal[i] << " MT" << endl;
    }

    cout << "---------------------------" << endl;
    cout << "Subtotal Geral: " << valor_total << " MT" << endl;

    if (valor_total > 1000) {
        float desconto = valor_total * 0.10;
        valor_total -= desconto;
        cout << "Desconto Aplicado (10%): -" << desconto << " MT" << endl;
    }

    cout << "Valor Total a Pagar: " << valor_total << " MT" << endl;

    return 0;
}
