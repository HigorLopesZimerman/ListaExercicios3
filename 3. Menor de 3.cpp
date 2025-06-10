#include <iostream>
#include <conio.h>

using namespace std;

class MenorD3{
	
	private:
		
		int a, b, c;
		
	public:
		
		
		void lerValores(){	
			cout << "Primeiro valor: ";
			cin >> a;
			cout << "Segundo valor: ";
			cin >> b;
			cout << "Terceiro valor: ";
			cin >> c;
		}
		
		void mostrarMenor(){
			
			int menor = a;
			if(menor > b){
				menor = b;
			}
			if(menor > c){
				menor = c;
			}
			
			cout << "MENOR = " << menor;
		}	
	
};

int main(){
	
	MenorD3 exemplo;
	
	exemplo.lerValores();
	exemplo.mostrarMenor();
	getch();
}
