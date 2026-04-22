#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

/**
 * Estudante: João Armando Mussepe
 * Universidade Licungo - Licenciatura em Informática
 * Cadeira: Laboratório II (C++)
 * Pergunta 1: Temperaturas médias de 7 dias da semana.
 */

int main() {
    float temperaturas[7];
    string dias[] = {"Segunda-feira", "Terca-feira", "Quarta-feira", "Quinta-feira", "Sexta-feira", "Sabado", "Domingo"};
    float soma = 0, mediaSemanal;
    float tempMaisAlta;
    int diaMaisAlta = 0;

    cout << "--- Registro de Temperaturas Semanais ---" << endl;

    // Leitura das temperaturas
    for (int i = 0; i < 7; i++) {
        cout << "Digite a temperatura media de " << dias[i] << ": ";
        cin >> temperaturas[i];
        soma += temperaturas[i];

        // Inicializa ou atualiza a temperatura mais alta
        if (i == 0 || temperaturas[i] > tempMaisAlta) {
            tempMaisAlta = temperaturas[i];
            diaMaisAlta = i;
        }
    }

    mediaSemanal = soma / 7;

    // Exibição dos resultados
    cout << fixed << setprecision(2);
    cout << "\n--- Resultados da Semana ---" << endl;
    cout << "Media Semanal: " << mediaSemanal << " C" << endl;
    cout << "Temperatura mais alta: " << tempMaisAlta << " C (" << dias[diaMaisAlta] << ")" << endl;

    return 0;
}
