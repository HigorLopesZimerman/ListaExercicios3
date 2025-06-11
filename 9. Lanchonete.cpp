#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

class Lanchonete {
	private:
		int codigo, quantidade;

	public:
		void lerPedido() {
			cout << "Codigo do produto comprado: ";
			cin >> codigo;
			cout << "Quantidade comprada: ";
			cin >> quantidade;
		}

		void calcularValor() {
			double preco = 0.0;

			if (codigo == 1) {
				preco = 5.00;
			} else if (codigo == 2) {
				preco = 3.50;
			} else if (codigo == 3) {
				preco = 4.80;
			} else if (codigo == 4) {
				preco = 8.90;
			} else if (codigo == 5) {
				preco = 7.32;
			} else {
				cout << "Codigo invalido.";
				return;
			}

			double total = preco * quantidade;

			cout << fixed << setprecision(2);
			cout << "Valor a pagar: R$ " << total;
		}
};

int main() {
	Lanchonete pedido;
	pedido.lerPedido();
	pedido.calcularValor();
	getch();
}

