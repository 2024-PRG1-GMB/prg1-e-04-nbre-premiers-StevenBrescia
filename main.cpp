/*
*
 *file main.cpp
 * version 1.0.0
 * author Steven Brescia
 * date : 05.10.2024
 * brief : programme pour trouver tout les nombres premiers entre 2 et la valeure saisie.
 */

#include <iostream>
using namespace std;

int main() {
    // initialisation des valeurs
    int valeur, colone = 0;
    char choix_recommencer;

    cout << "Ce programme affiche tout les nombres premiers entre 2 et un nombre de votre choix." << endl;

    //demande d'input à l'utilisateur
    do {
        do {
            cout << "Veuillez saisir une valeur comprise entre 2 et 1000 :" << endl;
            cin >> valeur;
        } while (valeur > 1000 || valeur < 2 || valeur == 1000);

        cout << "Voici la liste des nombres premiers :" << endl;
        // boucle pour compter le nombre de diviseurs
        for (int dividende = 2; dividende <= valeur; dividende++) {
            int nb_diviseur = 0; // variable qui va compter le nombre de diviseurs.

            for (int diviseur = 1; diviseur <= dividende; diviseur++) {
                if (dividende % diviseur == 0) {
                    nb_diviseur++;
                }
            }

            //conditions sur le nombre de diviseurs et affichage des nombres premier.
            if (nb_diviseur == 2) {
                cout << '\t' << dividende << " ";
                if (colone < 4) {
                    colone++;
                } else {
                    cout << endl;
                    colone = 0;
                }
            }
        }
        cout << endl;
        cout << endl;

        //demande pour recommencer le programme
        do {
            cout << "Voulez-vous recommencer [O/N] ?" << endl;
            cin >> choix_recommencer;
        } while (choix_recommencer != 'O' && choix_recommencer != 'N' &&
          choix_recommencer != 'o' && choix_recommencer != 'n');
    } while (choix_recommencer != 'N' && choix_recommencer != 'n');

    cout << "Fin du programme.";
    return EXIT_SUCCESS;
}
