#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    float temperaturas[7];
    string dias[] = {"Segunda-feira", "Terca-feira", "Quarta-feira", "Quinta-feira", "Sexta-feira", "Sabado", "Domingo"};
    float soma = 0, mediaSemanal;
    float tempMaisAlta;
    int diaMaisAlta = 0;

    cout << "--- Registro de Temperaturas Semanais ---" << endl;

    for (int i = 0; i < 7; i++) {
        cout << "Digite a temperatura media de " << dias[i] << ": ";
        cin >> temperaturas[i];
        soma += temperaturas[i];

        if (i == 0 || temperaturas[i] > tempMaisAlta) {
            tempMaisAlta = temperaturas[i];
            diaMaisAlta = i;
        }
    }

    mediaSemanal = soma / 7;

    cout << fixed << setprecision(2);
    cout << "\n--- Resultados da Semana ---" << endl;
    cout << "Media Semanal: " << mediaSemanal << " C" << endl;
    cout << "Temperatura mais alta: " << tempMaisAlta << " C (" << dias[diaMaisAlta] << ")" << endl;

    return 0;
}
