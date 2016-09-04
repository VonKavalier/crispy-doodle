#include <iostream>
#include <string>
#include <unistd.h>
using namespace std;

int main(){
    bool pacifist = true;
    string name;
    string trash;

    cout << "Bonjour et bienvenue dans ce jeu un peu sp\x8Acial qui n'en est pas vraiment un.\n\n";
    sleep(5);
    cout << "En effet ce jeu est une succession de choix qui te changeront a jamais. (J'essaie de donner envie de jouer)\n\n";
    sleep(7);

    cout << "Commençons.\n";
    cout << "Quel est ton nom ? : ";
    cin >> name;

    cout << "\n\nHum... "+name+"... J'aurais pas choisi ça mais pourquoi pas.\n\n";
    sleep(5);
    cout << "Ah. J'ai une mauvaise perception du genre, t'es un homme ou une femme au fait ? : ";
    cin >> trash;

    cout << "\n\nEn fait on s'en fout. Dans tous les cas je t'aurais donne une épée. Pas de sexisme ici.\n";
    sleep(3);
    cout << "+------------------------------------------------------------------------------------------------------+";
    cout << "| VOUS OBTENEZ UNE EPEE : elle a le tranchant de 1000 pétales de roses, pas très utile mais c'est swag |";
    cout << "+------------------------------------------------------------------------------------------------------+";

    sleep(100);

    return 0;
}
