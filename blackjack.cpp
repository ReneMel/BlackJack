#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int  numrandom,Tj=0,Tb=0; // Total jugador, total Banca
int rev;
int op;
bool endgame=false;
bool banca=false;
int as=4;
int dos=4;
int tres=4;
int cuatro=4;
int cinco=4;
int seis=4;
int siete=4;
int ocho=4;
int nueve=4;
int diez=16;
int Probnextmov;
int ProbBlack;



void Probabilidad(int CartaJ1, int CartaJ2, int TotalJugador){
	//eliminar cartas que el jugador ha sacado del tablero 
	float CasosPosibles=0;
	float CasosFavorables=0;
	
	//op=2;

	if (as!=0){
		if(CartaJ1==1){
		as--;
		}
	}

	if (dos!=0){
		if(CartaJ1==2){
		dos--;
		}
	}
	if (tres!=0){
		if(CartaJ1==3){
		tres--;
		}
	}
	if (cuatro!=0){
		if(CartaJ1==4){
		cuatro--;
		}
	}
	if (cinco!=0){
		if(CartaJ1==5){
		cinco--;
		}
	}
	if (seis!=0){
		if(CartaJ1==6){
		seis--;
		}
	}
	if (siete!=0){
		if(CartaJ1==7){
		siete--;
		}
	}
	if (ocho!=0){
		if(CartaJ1==8){
		ocho--;
		}
	}
	if (nueve!=0){
		if(CartaJ1==9){
		nueve--;
		}
	}
	if (diez!=0){
		if(CartaJ1==10){
		diez--;
		}
	}

	// carta 2, la cual solo funcionará en la primera tirada 
	if (CartaJ2!=0){
		if (as!=0){
				if(CartaJ1==1){
				as--;
				}
		}

		if (dos!=0){
				if(CartaJ1==2){
				dos--;
				}
		}
		if (tres!=0){
				if(CartaJ1==3){
				tres--;
				}
		}
		if (cuatro!=0){
				if(CartaJ1==4){
				cuatro--;
				}
		}
		if (cinco!=0){
				if(CartaJ1==5){
				cinco--;
				}
		}
		if (seis!=0){
				if(CartaJ1==6){
				seis--;
				}
		}
		if (siete!=0){
				if(CartaJ1==7){
				siete--;
				}
		}
		if (ocho!=0){
				if(CartaJ1==8){
				ocho--;
				}
		}
		if (nueve!=0){
			if(CartaJ1==9){
			nueve--;
			}
		}
		if (diez!=0){
			if(CartaJ1==10){
			diez--;
			}
		}
	}

	CasosPosibles=as+dos+tres+cuatro+cinco+seis+siete+ocho+nueve+diez;
	cout<< "CASOS POSIBLES: "<<CasosPosibles<<endl;

	if(TotalJugador+1<=21){
		CasosFavorables+=as;
	}
	if(TotalJugador+2<=21){
		CasosFavorables+=dos;
	}
	if (TotalJugador+3<=21){
		CasosFavorables+=tres;
	}
	if (TotalJugador+4<=21){
		CasosFavorables+=cuatro;
	}
	if (TotalJugador+5<=21){
		CasosFavorables+=cinco;
	}
	if (TotalJugador+6<=21){
		CasosFavorables+=seis;
	}
	if (TotalJugador+7<=21){
		CasosFavorables+=siete;
	}
	if (TotalJugador+8<=21){
		CasosFavorables+=ocho;
	}
	if (TotalJugador+9<=21){
		CasosFavorables+=nueve;
	}
	if (TotalJugador+10<=21){
		CasosFavorables+=diez;
	}

	cout<<"CASOS FAVORABLES: "<<CasosFavorables<<endl;

	cout<<"La Probabilidad de exito en tu siguiente movimiento es del "<<(CasosFavorables/CasosPosibles)*100<<"%"<<endl;

	float a =diez, c = CasosPosibles, d;
		d = a / c;
		//e = b / c;	
	if (TotalJugador!=21){
		cout<<"Probabilidad para completar el BlackJack!: "<<endl;
	}

	if (TotalJugador==2 or TotalJugador==3  or TotalJugador==4 or TotalJugador==5 or TotalJugador==6 or TotalJugador==7 or TotalJugador==8  or TotalJugador==9 or TotalJugador==10 or TotalJugador==11){
		cout << "La probabilidad de que se obtenga un 10 es de:  " << d*100 << "%" << endl;
	}
	if (TotalJugador==12){
		cout << "La probabilidad de que se obtenga un 9 es de: " << (nueve/c)*100 << "%" << endl;
	}
	if (TotalJugador==13){
		cout << "La probabilidad de que se obtenga un 8 es de: " << (ocho/c)*100 << "%" << endl;
	}
	if (TotalJugador==14){
		cout << "La probabilidad de que se obtenga un 7 es de: " << (siete/c)*100 << "%" << endl;
	}
	if (TotalJugador==15){
		cout << "La probabilidad de que se obtenga un 6 es de: " << (seis/c)*100 << "%" << endl;
	}
	if (TotalJugador==16){
		cout << "La probabilidad de que se obtenga un 5 es de: " << (cinco/c)*100 << "%" <<endl;
	}
	if (TotalJugador==17){
		cout << "La probabilidad de que se obtenga un 4 es de: " << (cuatro/c)*100 << "%" << endl;
	}
	if (TotalJugador==18){
		cout << "La probabilidad de que se obtenga un 3 es de: " << (tres/c)*100 << "%" << endl;
	}
	if (TotalJugador==19){
		cout << "La probabilidad de que se obtenga un 2 es de: " << (dos/c)*100 << "%" << endl;
	}
	if (TotalJugador==20){
		cout << "La probabilidad de que se obtenga un 1 es de: " << (as/c)*100 << "%" << endl;
	}

}


void  PrimeraJugada(){
		float a =16 ,b = 4, c = 52, d,e;
	d = a / c;
	e = b / c;
	 op=2;

	srand(time(NULL));
    int CartaJ1 = 1+(rand()%10);
    int CartaJ2 = 1+(rand()%10);
    int CartaB1 = 1+(rand()%10);
    int CartaB2 = 1+(rand()%10);


		cout<< "Tus primeras cartas son: "<< CartaJ1<<" y "<<CartaJ2<<endl;
		Tj=CartaJ1+CartaJ2;
		cout<<"Tu total es: "<<Tj<<endl;



		//cout<< "Las primeras cartas de la banca son: "<<CartaB1<<" y "<<CartaB2<<endl;
		Tb=CartaB1+CartaB2;
		//cout<<"El total de la Banca es: "<<Tb<<endl<<endl;
		cout<<"LA BANCA TOMA SUS PRIMERAS DOS CARTAS"<<endl;
		cout<<"-------------------------------------"<<endl;
		if (Tj<21){
			Probabilidad(CartaJ1,CartaJ2,Tj);
		}


		cout <<"¿Cual es tu siguiente movimiento?"<<endl<<"Para seguir tomando cartas presiona 1, para quedarte con las que tienes presiona 0"<<endl;
		cin>>op;
		if(op==1){
		cout<<"Ha elegido tomar otra carta. "<<endl;
		}
		else if(op==0) {
		cout<<"Decidio quedarse con las cartas actuales. " <<endl;
		}
	 while(op!=0 and op!=1){
		cin>>op;
		cout<<op <<endl;
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
		cout<< "Tu total fue: "<<Tj<<endl;
		cout<<"El total de la banca fue: " <<Tb<<endl;
		endgame=true;
		return;

	}
	if (Tb==21){
		cout<<endl;
		cout<<"HAS PERDIDO LA PARTIDA, LA BANCA GANA"<<endl;
		cout<< "Tu total Fue: "<<Tj<<endl;
		cout<<"El total de la banca fue: " <<Tb<<endl;
		endgame=true;
		return;
	}
	if (Tj>21){
		cout<<endl;
		cout<<"Has superado el numero 21, debido a esto pierdes automaticamente"<<endl;
		cout<<"Tu total fue: "<<Tj<<endl;
		cout<<"El total de la banca fue: " <<Tb<<endl;
		endgame=true;
		return;
	}
	if (Tb>21){
		cout<<endl;
		cout<<"La banca ha superado el numero 21, debido a esto pierde automaticamente"<<endl;
		cout<<"Tu total fue: "<<Tj<<endl;
		cout<<"El total de la banca fue: " <<Tb<<endl;
		endgame=true;
		return;
	}
	if (Tj>21 && Tb>21){
		cout<<endl;
		cout<<"Ambos han superado el numero 21, debido a esto no hay ningun ganador"<<endl;
		cout<<"Tu total fue: "<<Tj<<endl;
		cout<<"El total de la banca fue: " <<Tb<<endl;
		endgame=true;
		return;
	}

	if (op==0){
		if (Tj>Tb && Tj<=21){
				cout<<endl;
				cout<<"FELICIDADES HAS GANADO LA PARTIDA"<<endl;
				cout<< "Tu total Fue: "<<Tj<<endl;
				cout<<"El total de la banca fue: " <<Tb<<endl;
				endgame=true;
				return;
		}
		if (Tj<Tb && Tb<=21){
				cout<<endl;
				cout<<"HAS PERDIDO LA PARTIDA, LA BANCA GANA"<<endl;
				cout<< "Tu total Fue: "<<Tj<<endl;
				cout<<"El total de la banca fue: " <<Tb<<endl;
				endgame=true;
				return;
		}
	  	if(Tj==Tb && Tj<=21 && Tb<=21){
			cout<<endl;
			cout <<"La banca y el jugador han empatado."<<endl;
			cout<<"Tu total fue: "<<Tj<<endl;
			cout<<"El total de la banca fue: " <<Tb<<endl;
			endgame=true;
			return;
		}
		if(Tj>21 && Tb>21){
		cout<<endl;
		cout <<"Ambos se han pasado de 21, por lo tanto NADIE gana. "<<endl;
		cout<<"Tu total fue: "<<Tj<<endl;
		cout<<"El total de la banca fue: " <<Tb<<endl;
		endgame=true;
		return;
		}
	}
}

void revisarbanca(){
	 if (Tb>17 and Tb<21){
	 	banca=!banca;
	 }
}

void Jugar(){
	float a =16 ,b = 4, c = 52, d,e;
	d = a / c;
	e = b / c;
	if (endgame!=true){
		do {

				if (op==1){
						op=2;
				}

				int CartaJ1 = 1+(rand()%10);
 				int CartaB1 = 1+(rand()%10);

				if (op!=0){
					cout<< "Tu carta es: "<< CartaJ1<<endl;
					Tj+=CartaJ1;
					cout<<"Tu total es: "<<Tj<<endl;
					if (Tj<21){	
						Probabilidad(CartaJ1,0,Tj);
					}
					int CartaB1 = 1+(rand()%10);
				}


				if (endgame!=true){
					revisarbanca();
				}

				if (Tb<=17){
					//cout<< "La carta de la Banca es:  "<<CartaB1<<endl;
					cout<<"LA BANCA HA TOMADO OTRA CARTA"<<endl<<endl;
					cout<<"-------------------------------------"<<endl<<endl;
					cout <<endl;
					Tb+=CartaB1;
					//cout<<"El total de la Banca es: "<<Tb<<endl<<endl;
				}
				else {
           cout<<" LA BANCA NO HACE CAMBIOS"<<endl;
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
	cout<<"Reglas: "<<endl;
	cout<<endl;
	cout<<"1.A cada jugador se le repartiran 2 cartas al inicio."<<endl;
	cout<<endl;
	cout<<"2.El jugador tendra la opcion de agarrar otra carta o quedarse con las que tiene"<<endl;
	cout<<endl;
	cout<<"3.Para ganar el juego la suma del numero de cartas que se posee debe de ser el mas cercano a 21 o 21."<<endl;
	cout<<endl;
	cout<<"4.Un BlackJack se obtiene con un 10 y 11, sin embargo se le dio el valor de 1 a nuestro As por lo que esto no sera posible."<<endl;
	cout<<endl;

	PrimeraJugada();
	
	Jugar();
	if (endgame!=true){	
		revisar();
	}
	


	return 0;
}