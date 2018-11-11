#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int CartaJ1, CartaJ2, CartaB1,CartaB2, numrandom,Tj=0,Tb=0; // Total jugador, total Banca 
bool endgame=false;



int probabilidad(){


}

int numeroX(){

	numrandom=1+(rand()%10);
	return numrandom;
}

int  PrimeraJugada(){
	int op=2;
	
		CartaJ1=numeroX();
		//Tj+=CartaJ1;
		CartaB1=numeroX();
		//Tb+=CartaB1;

		CartaJ2=numeroX();
		CartaB2=numeroX();

		cout<< "Tus primeras cartas son: "<< CartaJ1<<" y "<<CartaJ2<<endl;
		Tj=CartaJ1+CartaJ2;
		cout<<"Tu total es: "<<Tj<<endl;

		cout<< "Las primeras cartas de la banca son: "<<CartaB1<<" y "<<CartaB2<<endl;
		Tb=CartaB1+CartaB2;
		cout<<"El total de la Banca es: "<<Tb<<endl<<endl;


		cout <<"¿Cual es tu siguiente movimiento?"<<endl<<"Para seguir tomando cartas presiona 1, para quedarte con las que tienes presiona 0"<<endl;
		
		while (op!=0 and op!=1){
			cin>>op;
			cout<<op;
			if (op!=0 and op!=1){
				cout<<"Opcion no valida, vuelve a elegir."<<endl;
			}
			else {
				break;
			}

		}

		return op;
	
}


void Jugar(int op){
	int r=0;
	do {

		if (op==0){
			break;
		}
		else if (op==1){
			op=2;
		}
		
		CartaJ1=numeroX();
		//Tj+=CartaJ1;
		CartaB1=numeroX();
		//Tb+=CartaB1;

		//CartaJ2=numeroX();
		//CartaB2=numeroX();

		cout<< "Tu carta es: "<< CartaJ1<<endl;
		Tj+=CartaJ1;
		cout<<"Tu total es: "<<Tj<<endl;

		cout<< "La carta de la Banca es:  "<<CartaB1<<endl;
		Tb+=CartaB1;
		cout<<"El total de la Banca es: "<<Tb<<endl<<endl;


		cout <<"¿Cual es tu siguiente movimiento?"<<endl<<"Para seguir tomando cartas presiona 1, para quedarte con las que tienes presiona 0"<<endl;
		
		//op=2

		while (op!=0 and op!=1){
			cin>>op;
			cout<<op;
			if (op!=0 and op!=1){
				cout<<"Opcion no valida, vuelve a elegir."<<endl;
			}
			else {
				break;
			}

		}
		r++;
	
	}while (endgame!= true and op==1);

}


int main(int argc, char const *argv[])
{
	int op1;
	cout<<"Bienvenido a 21 tambien conocido como BlackJack"<<endl;
	cout<<"Reglas: "<<endl;// Sampen las reglas ustedes.. que hueva

	op1=PrimeraJugada();

	Jugar(op1);


	return 0;
}