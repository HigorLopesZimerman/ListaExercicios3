#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

class Notas{
	
	private:
		double n1, n2, total;
		
		
	public:	
		
		void lerNotas(){
			
			cout << "Digite a primeira nota: ";
			cin >> n1;
			cout << "Digite a segunda nota: ";
			cin >> n2;
			
		}
		
		void calculo(){
											
			total = n1+n2;
			cout << "NOTA FINAL = " << 	total << setprecision(1);					
			if(total < 60.0){
				cout << "\nREPROVADO";
			}
		}
};

int main(){
	
	Notas aluno;
	
	aluno.lerNotas();
	aluno.calculo();
	getch();
}
