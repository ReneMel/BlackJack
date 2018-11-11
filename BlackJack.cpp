#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int CartaJ1, CartaB1, numrandom,Tj=0,Tb=0; // Total jugador, total Banca 



int probabilidad(){


}

int numeroX(){

	numrandom=1+(rand()%10);
	return numrandom;
}

void CartasJugador(){
	int op=2;
	do {
		CartaJ1=numeroX();
		CartaB1=numeroX();


		cout<< "Tu primera carta es: "<< CartaJ1<<endl;
		Tj+=CartaJ1;
		cout<<"Tu total es: "<<Tj<<endl;

		cout<< "La primera carta de la banca es: "<<CartaB1<<endl;
		Tb+=CartaB1;
		cout<<"El total de la Banca es: "<<Tb<<endl<<endl;


		cout <<"¿Cual es tu siguiente movimiento?"<<endl<<"Para seguir tomando cartas presiona 1, para quedarte con las que tienes presiona 0"<<endl;
		
		while (op!=0 or op!=1){
			cin>>op;
			cout<<op;
			if (op!=0 and op!=1){
				cout<<"Opcion no valida, vuelve a elegir."<<endl;
			}
			else {
				break;
			}

		}

	}
	while (op==1);
}

int main(int argc, char const *argv[])
{
	cout<<"Bienvenido a 21 tambien conocido como BlackJack"<<endl;
	cout<<"Reglas: "<<endl;// Sampen las reglas ustedes.. que hueva

	CartasJugador();



	return 0;
}