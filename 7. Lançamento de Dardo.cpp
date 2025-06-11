#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

class Dardo {
	private:
		double distancias[3];

	public:
		void lerDistancias() {
			cout << "Digite as tres distancias:\n";
			for(int i = 0; i < 3; i++) {
				cin >> distancias[i];
			}
		}

		void mostrarMaior() {
			double maior = distancias[0];
			for(int i = 1; i < 3; i++) {
				if(distancias[i] > maior) {
					maior = distancias[i];
				}
			}

			cout << fixed << setprecision(2);
			cout << "MAIOR DISTANCIA = " << maior;
		}
};

int main() {
	Dardo atleta;
	atleta.lerDistancias();
	atleta.mostrarMaior();
	getch();
}

