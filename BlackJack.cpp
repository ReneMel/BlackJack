#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int CartaJ1, CartaJ2, CartaB1,CartaB2, numrandom,Tj=0,Tb=0; // Total jugador, total Banca 
int rev;
int op;
bool endgame=false;
bool banca=false;



int probabilidad(){


}

int numeroX(){

	numrandom=1+(rand()%10);
	return numrandom;
}

void  PrimeraJugada(){
	 op=2;
	
		CartaJ1=numeroX();
		//Tj+=CartaJ1;
		CartaB1=numeroX();
		//Tb+=CartaB1;

		CartaJ2=numeroX();
		CartaB2=numeroX();

		cout<< "Tus primeras cartas son: "<< CartaJ1<<" y "<<CartaJ2<<endl;
		Tj=CartaJ1+CartaJ2;
		cout<<"Tu total es: "<<Tj<<endl;


		//cout<< "Las primeras cartas de la banca son: "<<CartaB1<<" y "<<CartaB2<<endl;
		Tb=CartaB1+CartaB2;
		//cout<<"El total de la Banca es: "<<Tb<<endl<<endl;
		cout<<"LA BANCA TOMA SUS PRIMERAS DOS CARTAS"<<endl;
		cout<<"-------------------------------------"<<endl;


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

		//return op;
	
}

void revisar(){
	if (Tj==21){
		cout<<endl;
		cout<<"FELICIDADES HAS GANADO LA PARTIDA"<<endl;
		cout<< "Tu total Fue: "<<Tj<<endl;
		cout<<"El total de la banca fue" <<Tb<<endl;
		endgame=true;

	}
	if (Tb==21){
		cout<<endl;
		cout<<"HAS PERDIDO LA PARTIDA, LA BANCA GANA"<<endl;
		cout<< "Tu total Fue: "<<Tj<<endl;
		cout<<"El total de la banca fue: " <<Tb<<endl;
		endgame=true;
	}
	if (Tj>21){
		cout<<endl;
		cout<<"Has superado el numero 21, debido a esto pierdes automaticamente"<<endl;
		cout<<"Tu total fue: "<<Tj<<endl;
		cout<<"El total de la banca fue: " <<Tb<<endl;
		endgame=true;
	}
	if (op==0){
		if (Tj>Tb){
				cout<<endl;
				cout<<"FELICIDADES HAS GANADO LA PARTIDA"<<endl;
				cout<< "Tu total Fue: "<<Tj<<endl;
				cout<<"El total de la banca fue: " <<Tb<<endl;
				endgame=true;
		}
		if (Tj<Tb){
				cout<<endl;
				cout<<"HAS PERDIDO LA PARTIDA, LA BANCA GANA"<<endl;
				cout<< "Tu total Fue: "<<Tj<<endl;
				cout<<"El total de la banca fue: " <<Tb<<endl;
				endgame=true;
		}
	}	
}

void revisarbanca(){
	 if (Tb>17 and Tb<21){
	 	banca=!banca;
	 }
}

void Jugar(){
	if (endgame!=true){
		do {

				if (op==1){
						op=2;
				}
				
				CartaJ1=numeroX();
				//Tj+=CartaJ1;
				CartaB1=numeroX();

				if (op!=0){
					cout<< "Tu carta es: "<< CartaJ1<<endl;
					Tj+=CartaJ1;
					cout<<"Tu total es: "<<Tj<<endl;
				}

				if (endgame!=true){
					revisarbanca();
				}

				if (banca){
					cout<<" LA BANCA NO HACE CAMBIOS"<<endl;

				}
				else {
				//cout<< "La carta de la Banca es:  "<<CartaB1<<endl;
				cout<<"LA BANCA HA TOMADO OTRA CARTA"<<endl<<endl;
				cout<<"-------------------------------------"<<endl<<endl;
				cout <<endl;
				Tb+=CartaB1;
				//cout<<"El total de la Banca es: "<<Tb<<endl<<endl;
				
				}

				//cout<<"El total de la Banca es: "<<Tb<<endl<<endl;

				revisar();
				if (endgame){
					break;
				}

				cout <<"¿Cual es tu siguiente movimiento?"<<endl<<"Para seguir tomando cartas presiona 1, para quedarte con las que tienes presiona 0"<<endl;

			
				while (op!=0 and op!=1){
						cin>>op;
						//cout<<op;
						if (op!=0 and op!=1){
								cout<<"Opcion no valida, vuelve a elegir."<<endl;
						}
				}

				
				
		}while (op==1);
		//revisar();

		
	}
}


int main(int argc, char const *argv[])
{
	int op1;
	cout<<"Bienvenido a 21 tambien conocido como BlackJack"<<endl;
	cout<<"Reglas: "<<endl;// Sampen las reglas ustedes.. que hueva

	PrimeraJugada();
	Jugar();
	revisar();


	return 0;
}