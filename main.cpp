#include <iostream>
#include "Duree.hpp"

using namespace std;

int main()
{
    Duree duree1(0, 10, 42), duree2(0, 53, 27), duree3(0, 0, 10);
    Duree resultat;

    duree1.afficher();
    cout << "+" << endl;
    duree2.afficher();
    cout << "+" << endl;
    duree3.afficher();

    //resultat = duree1 + duree2 + duree3;
    resultat = operator+(operator+(duree1,duree2), duree3);

    cout << "=" << endl;
    resultat.afficher();

    return 0;
}
