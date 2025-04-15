#include <iostream>
#include "Duree.hpp"

using namespace std;

Duree::Duree(int heures, int minutes, int secondes)
    : m_heures(heures), m_minutes(minutes), m_secondes(secondes)
{
}

Duree& Duree::operator+=(const Duree &duree2)
{
    m_secondes += duree2.m_secondes;
    m_minutes += m_secondes / 60;
    m_secondes %= 60;

    m_minutes += duree2.m_minutes;
    m_heures += m_minutes / 60;
    m_minutes %= 60;

    m_heures += duree2.m_heures;

    return *this;
}

Duree& Duree::operator+=(int secondes)
{
    m_secondes += secondes;
    m_minutes += m_secondes / 60;
    m_secondes %= 60;

    m_heures += m_minutes / 60;
    m_minutes %= 60;

    return *this;
}

void Duree::afficher() const
{
    cout << m_heures << "h" << m_minutes << "m" << m_secondes << "s" << endl;
}

Duree operator+(Duree const& a, Duree const& b)
{
    Duree copie(a);
    copie += b;
    return copie;
}

Duree operator+(Duree const& duree, int secondes)
{
    Duree copie(duree);
    copie += secondes;
    return copie;
}

ostream& operator<<( ostream &flux, Duree const& duree)
{
    duree.afficher(flux) ;
    return flux;
}

void Duree::afficher(ostream &flux) const
{
    flux << m_heures << "h" << m_minutes << "m" << m_secondes << "s";
}