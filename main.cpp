#include <iostream>
using namespace std;
#include <string>
#include <ctime>
#include <cstdlib>

int main()
{
    bool loop = true;
    int loopchoice;
    srand(time(0));
    int player1 = 1+(rand()%10);
    int player2 = 1+(rand()%10);
    int banker1 = 1+(rand()%10);
    int banker2 = 1+(rand()%10);
    int playertotal = player1 + player2;
    int bankertotal = banker1 + banker2;
    int choice;
    int playerOVERWRITE;
    int bankerOVERWRITE;
    bool loop1 = true;
    bool loop2 = true;



    cout << "You drew a " << player1 << " and a " << player2 << endl;
    cout << "Your total is " << playertotal << endl;
    cout << "---" << endl;
    cout << "Would you like to 1: Twist or 2: Stick " << endl;
    cin >> choice;
    while( loop1 == true ){
        if( choice == 1 ){
            playerOVERWRITE = 1+(rand()%10);
            playertotal = playertotal + playerOVERWRITE;
            cout << "You drew " << playerOVERWRITE << endl;
            cout << "Your new total is " << playertotal << endl;
            cout << "---" << endl;


        if( playertotal > 21 ){
            loop1 = false;
            cout << "You're bust! Your total is " << playertotal << endl;
            cout << "Bankers total is " << bankertotal << endl;
            cout << "Banker started with a " << banker1 << " and a " << banker2 << endl;
            return 0;
        }
        cout << "Would you like to 1: Twist or 2: Stick " << endl;
        cin >> choice;
        if( choice == 2 ){
            loop1 = false;
            cout << "---" << endl;
        }
        }
        else if( choice == 2 ){
            loop1 = false;
            cout << "---" << endl;
        }

    }
    while( loop2 == true ){
        bankerOVERWRITE = 1+(rand()%10);
        bankertotal = bankertotal + bankerOVERWRITE;
        cout << "Banker drew a " << bankerOVERWRITE << endl;
        cout << "Bankers new total is " << bankertotal << endl;
        cout << "---" << endl;
        if( bankertotal > 21 ){
            cout << "Banker is bust! You win!" << endl;
            cout << "Your total was " << playertotal << endl;
            cout << "Bankers total was " << bankertotal << endl;
            cout << "Banker started with a " << banker1 << " and a " << banker2 << endl;
            cout << " " << endl;
            loop2 = false;
            return 0;
        }
        else if( bankertotal > 18 && bankertotal < 21 || bankertotal == 21 || bankertotal == 18 ){
            cout << "Banker is sticking" << endl;
            cout << "---" << endl;
            loop2 = false;
        }


    }
    if( playertotal > bankertotal ){
        cout << "You win!" << endl;
        cout << "Your total was " << playertotal << endl;
        cout << "Bankers total was " << bankertotal << endl;
        cout << "Banker started with a " << banker1 << " and a " << banker2 << endl;
        cout << " " << endl;
        return 0;
    }
    else if( playertotal == bankertotal ) {
        cout << "It's a draw! Banker wins!" << endl;
        cout << "Your total was " << playertotal << endl;
        cout << "Bankers total was " << bankertotal << endl;
        cout << "Banker started with a " << banker1 << " and a " << banker2 << endl;
        cout << " " << endl;
        return 0;
    }
    else {
        cout << "Banker wins!" << endl;
        cout << "Your total was " << playertotal << endl;
        cout << "Bankers total was " << bankertotal << endl;
        cout << "Banker started with a " << banker1 << " and a " << banker2 << endl;
        cout << " " << endl;
        return 0;
    }

}