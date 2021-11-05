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
	if (this->annee > D.annee)
		return true;
	else if (this->annee < D.annee)
		return false;
	else
	{
		if (this->mois > D.mois)
			return true;
		else if (this->mois < D.mois)
			return false;
		else
		{
			if (this->jour > D.jour)
				return true;
			else if (this->jour < D.jour)
				return false;
			else
				return this->Heure::operator>(D);
		}
	}
	return false;
}

bool DateHeure::DateH::isLeap(int a)
{
	bool res;
	res = (a % 100 == 0) ? (a % 400 == 0) ? true : false : (a % 4 == 0) ? true : false;
	return res;
}
