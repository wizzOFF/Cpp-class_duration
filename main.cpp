#include <iostream>
#include "Duree.hpp"

using namespace std;

int main()
{
    Duree duree1(0, 10, 42), duree2(0, 53, 27), duree3(0, 0, 10);
    Duree resultat;

    duree1.afficher();
    //cout << "+" << endl;
    //duree2.afficher();
    //cout << "+" << endl;
    //duree3.afficher();

    //resultat = duree1 + duree2 + duree3;
    //resultat = operator+(operator+(duree1,duree2), duree3);
    /*
    resultat = duree1 + 3600;
 
    cout << "+ 1 heure =" << endl;
    resultat.afficher();
    */

    //cout << duree1 << " et " << duree2 << endl;

    cout << duree1 + duree2 << endl;

    return 0;
}
