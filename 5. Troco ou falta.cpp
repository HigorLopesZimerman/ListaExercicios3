#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

class Caixa {

	private:
		double preco;
		int quantidade;
		double recebido;

	public:

		void lerDados() {
			cout << "Preco unitario do produto: ";
			cin >> preco;
			cout << "Quantidade comprada: ";
			cin >> quantidade;
			cout << "Dinheiro recebido: ";
			cin >> recebido;
		}

		void calcularTroco() {
			double total = preco * quantidade;

			cout << fixed << setprecision(2);

			if (recebido >= total) {
				double troco = recebido - total;
				cout << "TROCO = " << troco << endl;
			} else {
				double falta = total - recebido;
				cout << "DINHEIRO INSUFICIENTE. FALTAM " << falta << " REAIS" << endl;
			}
		}
};

int main() {

	Caixa venda;

	venda.lerDados();
	venda.calcularTroco();

	getch();
}

