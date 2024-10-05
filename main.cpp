/*
*
*file main.cpp
* version 1.0.0
* author Steven Brescia
* date : 04.10.2024
* brief : programme pour trouver tout les nombre premiers entre 2 et la valeire saisie.
*/

#include <iostream>
using namespace std;

int main()
{
    int valeur, valeur_premier;
    char choix_recommencer;

    cout << "Ce programme affiche tout les nombres premiers entre 2 et votre choix." << endl;

do {
    do {
        cout << "Veuillez saisir une valeure comprise entre 2 et 1000" << endl;
        cin >> valeur;
    }while (valeur > 1000 || valeur < 2);

        for (int i = 2; i <= valeur; i++){
            cout << endl;
            for (int j = 2; j <= j ; j++){

            valeur_premier = i % j;
            }
                for (int k = 0; k < 5; k++) {
                    if (valeur_premier == 0){
                    cout << valeur_premier;
                    }

        }
    }
cout << endl;
    do{
        cout << "voulez-vous recommencer [O/N] ?" << endl;
        cin >> choix_recommencer;
    } while (choix_recommencer != 'O' && choix_recommencer != 'N');
}while ( choix_recommencer != 'N');
    return EXIT_SUCCESS;
}
