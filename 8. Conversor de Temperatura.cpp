#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cctype>

using namespace std;

class ConversorTemperatura {
	private:
		char escala;
		double temperatura;

	public:
		void lerDados() {
			cout << "Voce vai digitar a temperatura em qual escala (C/F)? ";
			cin >> escala;
			escala = toupper(escala); // deixa a letra maiúscula

			if (escala == 'C') {
				cout << "Digite a temperatura em Celsius: ";
				cin >> temperatura;
			} else if (escala == 'F') {
				cout << "Digite a temperatura em Fahrenheit: ";
				cin >> temperatura;
			} else {
				cout << "Escala invalida.";
			}
		}

		void converter() {
			cout << fixed << setprecision(2);
			if (escala == 'C') {
				double fahrenheit = temperatura * 9.0 / 5.0 + 32.0;
				cout << "Temperatura equivalente em Fahrenheit: " << fahrenheit;
			} else if (escala == 'F') {
				double celsius = (5.0 / 9.0) * (temperatura - 32.0);
				cout << "Temperatura equivalente em Celsius: " << celsius;
			}
		}
};

int main() {
	ConversorTemperatura temp;
	temp.lerDados();
	temp.converter();
	getch();
}

