#include <iostream>
#include <iomanip>
#include <conio.h>
#include <cmath>

using namespace std;

class Bhaskara{
	
	private:
		
		double a, b, c;
		

		
	public:
		
		void lerValores(){
			
			cout << "Coeficiente a: ";
			cin >> a;
			cout << "Coeficiente b: ";
			cin >> b;
			cout << "Coeficiente c: ";
			cin >> c;
			
		}
		
		double acharDelta(){
			return b * b - 4 * a * c;
		}
		
		void acharRaizes(){
			
			if(a == 0){
				cout << "Esta equacao nao eh do segundo grau" << endl;
				return;
			}
			
			double delta = acharDelta();
			
			if (delta < 0) {
				cout << "Esta equacao nao possui raizes reais" << endl;
			} else{
				
				double x1 = (-b + sqrt(delta)) / (2 * a);
				double x2 = (-b - sqrt(delta)) / (2 * a);
				
				cout << fixed << setprecision(4);
				cout << "X1 = " << x1 << endl;
				cout << "X2 = " << x2 << endl;

			}
		}
	
};

int main(){
	
	Bhaskara conta;
	
	conta.lerValores();
	conta.acharRaizes();
	getch();
}
