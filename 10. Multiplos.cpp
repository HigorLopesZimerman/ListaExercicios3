#include <iostream>
#include <conio.h>

using namespace std;

class Multiplos {
	private:
		int a, b;

	public:
		void lerNumeros() {
			cout << "Digite dois numeros inteiros:\n";
			cin >> a >> b;
		}

		void verificar() {
			if (a % b == 0 || b % a == 0) {
				cout << "Sao multiplos";
			} else {
				cout << "Nao sao multiplos";
			}
		}
};

int main() {
	Multiplos verificador;
	verificador.lerNumeros();
	verificador.verificar();
	getch();
}

