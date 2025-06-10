#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

class Telefonia{
	
	private:
		
		int minutos;
		
		
	public:
		
		void lerMinutos(){
			cout << "Digite a quantidade de minutos: ";
			cin >> minutos;
		}
		
		void calcularValor(){
			double valor = 50.0;
			
			if(minutos > 100){
				valor += (minutos - 100) * 2.00;
			}
			
			cout << fixed << setprecision(2);
			cout << "valor a pagar: R$: " << valor;
		}
	
		
};

int main(){
	
	Telefonia plano;
	
	plano.lerMinutos();
	plano.calcularValor();
	
	getch();
}
