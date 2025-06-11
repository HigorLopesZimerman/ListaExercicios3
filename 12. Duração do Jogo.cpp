#include <iostream>
#include <conio.h>

using namespace std;

class DuracaoJogo {
	private:
		int horaInicial, horaFinal, duracao;

	public:
		void lerHoras() {
			cout << "Hora inicial: ";
			cin >> horaInicial;
			cout << "Hora final: ";
			cin >> horaFinal;
		}

		void calcularDuracao() {
			if (horaInicial == horaFinal) {
				duracao = 24;
			} else if (horaInicial < horaFinal) {
				duracao = horaFinal - horaInicial;
			} else {
				duracao = 24 - horaInicial + horaFinal;
			}
		}

		void mostrarResultado() {
			cout << "O JOGO DUROU " << duracao << " HORA(S)";
		}
};

int main() {
	DuracaoJogo jogo;
	jogo.lerHoras();
	jogo.calcularDuracao();
	jogo.mostrarResultado();
	getch();
}

