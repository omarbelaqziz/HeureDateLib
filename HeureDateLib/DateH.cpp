#include "pch.h"
#include "DateH.h"
#include <iostream>
using namespace std;

DateHeure::DateH::DateH(short int h, short int m, short int s, short int j, short int mo, short int a) : Heure(h, m, s)
{
	short int NbrMax = 0;

	this->annee = (1900 < a) ? a : 1900;


	if (0 < mo && mo <= 12)
	{
		this->mois = mo;
		if (mo == 2)
			NbrMax = isLeap(a) ? 29 : 28;
		else
			NbrMax = ((mo % 2 == 0 && mo > 7) || (mo % 2 == 1 && mo <= 7)) ? 31 : 30;

		this->jour = (0 < j && j <= NbrMax) ? j : 0;
	}
	else
	{
		this->jour = this->mois = 0;
	}
}

void DateHeure::DateH::print() const
{
	cout << this->jour << "/" << this->mois << "/" << this->annee << "\t";
	Heure::print();
}

bool DateHeure::DateH::operator>(const DateH& D) const
{
	return (this->annee == D.annee) ? (this->mois == D.mois) ? (this->jour == D.jour) ? this->Heure::operator>(D) : (this->jour > D.jour) : (this->mois > D.mois) : (this->annee > D.annee);
}

bool DateHeure::DateH::isLeap(int a)
{
	return (a % 100 == 0) ? (a % 400 == 0) ? true : false : (a % 4 == 0) ? true : false;	
}
