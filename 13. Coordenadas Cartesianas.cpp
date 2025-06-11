#include <iostream>
#include <conio.h>

using namespace std;

class Coordenadas {
	private:
		double x, y;

	public:
		void lerValores() {
			cout << "Valor de X: ";
			cin >> x;
			cout << "Valor de Y: ";
			cin >> y;
		}

		void verificarPosicao() {
			if (x == 0 && y == 0) {
				cout << "Origem";
			} else if (x == 0) {
				cout << "Eixo Y";
			} else if (y == 0) {
				cout << "Eixo X";
			} else if (x > 0 && y > 0) {
				cout << "Q1";
			} else if (x < 0 && y > 0) {
				cout << "Q2";
			} else if (x < 0 && y < 0) {
				cout << "Q3";
			} else if (x > 0 && y < 0) {
				cout << "Q4";
			}
		}
};

int main() {
	Coordenadas ponto;
	ponto.lerValores();
	ponto.verificarPosicao();
	getch();
}

