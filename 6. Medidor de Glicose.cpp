#include <iostream>
#include <conio.h>

using namespace std;

class Glicose {

	private:
		double medida;

	public:

		void lerMedida() {
			cout << "Digite a medida da glicose: ";
			cin >> medida;
		}

		void mostrarClassificacao() {
			cout << "Classificacao: ";

			if (medida <= 100.0) {
				cout << "normal";
			} else if (medida <= 140.0) {
				cout << "elevado";
			} else {
				cout << "diabetes";
			}
		}
};

int main() {

	Glicose exame;

	exame.lerMedida();
	exame.mostrarClassificacao();

	getch();
}

