#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

class AumentoSalarial {
	private:
		double salario;
		double novoSalario;
		double aumento;
		int porcentagem;

	public:
		void lerSalario() {
			cout << "Digite o salario da pessoa: ";
			cin >> salario;
		}

		void calcularAumento() {
			if (salario <= 1000.00) {
				porcentagem = 20;
			} else if (salario <= 3000.00) {
				porcentagem = 15;
			} else if (salario <= 8000.00) {
				porcentagem = 10;
			} else {
				porcentagem = 5;
			}
			
			aumento = salario * porcentagem / 100.0;
			novoSalario = salario + aumento;
		}

		void mostrarResultado() {
			cout << fixed << setprecision(2);
			cout << "Novo salario R$ " << novoSalario << "\n";
			cout << "Aumento R$ " << aumento << "\n";
			cout << "Porcentagem = " << porcentagem << "%";
		}
};

int main() {
	AumentoSalarial funcionario;
	funcionario.lerSalario();
	funcionario.calcularAumento();
	funcionario.mostrarResultado();
	getch();
}

