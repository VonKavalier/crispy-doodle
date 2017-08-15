#include <iostream>
#include <string>
#include <unistd.h>
using namespace std;

int adventure_choice(){
	int adventure;
	cout << "\n\nBon, maintenant il va falloir partir a l'aventure.\n";
	cout << "\nQuel type d'aventure te tente ? : ";
	cout << "\n 1/ Sauvetage";
	cout << "\n 2/ Massacre";
	cout << "\n 3/ Chasse aux papillons\n";
	cin >> adventure;
	
	switch(adventure){
		case 1 :
			cout << "\n\nJe vois que nous affaire a une envie d'etre celebre pour avoir fait le bien\n";
			break;
		case 2 :
			cout << "\n\nJe vois que nous avons affaire a une envie d'etre celebre par la crainte\n";
			break;
		case 3 :
			cout << "\n\nJe vois que nous avons affaire a quelqu'un de pacifique et sans probleme d'ego\n";
			break;
	}
	return adventure;
}

int main(){
    bool pacifist = true;
    string name;
    string trash;
	string adventure;

    cout << "Bonjour et bienvenue dans ce jeu un peu special qui n'en est pas vraiment un.\n\n";
    sleep(5);
    cout << "En effet ce jeu est une succession de choix qui te changeront a jamais. (J'essaie de donner envie de jouer)\n\n";
    sleep(7);

    cout << "Commencons.\n";
    cout << "Quel est ton nom ? : ";
    cin >> name;

    cout << "\n\nHum... "+name+"... J'aurais pas choisi ca mais pourquoi pas.\n\n";
    sleep(5);
    cout << "Ah. J'ai une mauvaise perception du genre, t'es un homme ou une femme au fait ? : ";
    cin >> trash;

    cout << "\n\nEn fait on s'en fout. Dans tous les cas je t'aurais donne une epee. Pas de sexisme ici.\n";
    sleep(3);
    cout << "+------------------------------------------------------------------------------------------------------+\n";
    cout << "| VOUS OBTENEZ UNE EPEE : elle a le tranchant de 1000 petales de roses, pas tres utile mais c'est swag |\n";
    cout << "+------------------------------------------------------------------------------------------------------+";
	sleep(3);
	
	adventure = adventure_choice();
	
    sleep(100);

    return 0;
}
